import torch
from datasets import load_from_disk
from trl import DPOConfig, DPOTrainer
from transformers import AutoModelForCausalLM, AutoTokenizer

MODEL_NAME = "Salesforce/codegen-350M-multi"
model = AutoModelForCausalLM.from_pretrained(MODEL_NAME).half().cuda()
tokenizer = AutoTokenizer.from_pretrained(MODEL_NAME)
dataset = load_from_disk("preference_dataset")

if tokenizer.pad_token is None:
        tokenizer.pad_token = tokenizer.eos_token
model.gradient_checkpointing_enable()

training_args = DPOConfig(output_dir="../DPO_trained_model", logging_steps=1, per_device_train_batch_size=1, num_train_epochs=20)
trainer = DPOTrainer(model=model, args=training_args, processing_class=tokenizer, train_dataset=dataset["train"])

torch.cuda.empty_cache()
trainer.train()

trainer.save_model("../DPO_trained_model")