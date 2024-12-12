import datasets
import sys
import json
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM

SRC_LANG = sys.argv[1]
TGT_LANG = sys.argv[2]
EXP = "direct"
TOFILL_TOKEN = "{{{TOFILL}}}"

# 저장된 모델 경로
model_path = "DPO_trained_model" 

# 모델 및 토크나이저 로드
model = AutoModelForCausalLM.from_pretrained(model_path)
tokenizer = AutoTokenizer.from_pretrained(model_path)
problems = datasets.load_from_disk(f"datasets/{SRC_LANG}-{TGT_LANG}_datasets")

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
model.to(device) 

def stop_at_stop_token(decoded_string, problem):
    """
    Truncates the output at stop tokens, taking care to skip the prompt
    which may have stop tokens.
    """
    min_stop_index = len(decoded_string)
    for stop_token in problem["stop_tokens"]:
        stop_index = decoded_string.find(stop_token, len(problem["translation_prompt"]))
        if stop_index != -1 and stop_index < min_stop_index:
            min_stop_index = stop_index
    return decoded_string[:min_stop_index]


def generate(problem, tokenizer, model):
    input_ids = tokenizer(
        problem["translation_prompt"],
        return_tensors="pt",
    ).input_ids.cuda()
    generated_ids = model.generate(
        input_ids, max_length=1024, pad_token_id=tokenizer.eos_token_id + 2
    )
    truncated_string = stop_at_stop_token(tokenizer.decode(generated_ids[0]), problem)
    return truncated_string


for problem in problems["test"]:

    # generate each intermediate steps (explanation) sequentially, if any
    stop = problem["stop_tokens"]
    prompt = problem["translation_prompt"]
    while TOFILL_TOKEN in problem["translation_prompt"]:
        incomplete_prompt = prompt[:prompt.find(TOFILL_TOKEN)]
        problem["stop_tokens"] = ["\n#"]
        problem["translation_prompt"] = incomplete_prompt
        intermediate_completion = generate(problem, tokenizer, model).replace(incomplete_prompt, "")
        prompt = prompt.replace(TOFILL_TOKEN, intermediate_completion, 1)

    # finally generate translation
    problem["translation_prompt"] = prompt
    problem["stop_tokens"] = stop
    completion = generate(problem, tokenizer, model).replace(prompt, "")

    output = "test/after_train/" + SRC_LANG + "-" + TGT_LANG + "/" + problem["name"] + "." + TGT_LANG
    with open(output, "w") as f:
        print(f"Created {output}")
        f.write(problem["prompt"])
        f.write(completion)
        f.write("\n")
        f.write(problem["tests"])
    
    prompt = "test/after_train/" + SRC_LANG + "-" + TGT_LANG + "/" + problem["name"] + ".json"
    with open(prompt, "w") as f:
        print(f"Created {prompt}")
        json.dump(problem, f, ensure_ascii=False, indent=4)