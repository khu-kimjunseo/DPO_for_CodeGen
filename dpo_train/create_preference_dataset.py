import os
import json
import subprocess
import pandas as pd
from datasets import Dataset, DatasetDict

def compile_code(file_path, lang):
    """
    파일을 컴파일하여 성공 여부를 반환합니다.
    - lang: 'cpp', 'java', 'py' 중 하나
    """
    if lang == "cpp":
        output_file = file_path.replace(".cpp", ".out")
        result = subprocess.run(["g++", file_path, "-o", output_file], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    elif lang == "java":
        result = subprocess.run(["javac", file_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    elif lang == "py":
        result = subprocess.run(["python3", "-m", "py_compile", file_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    else:
        raise ValueError(f"Unsupported language: {lang}")
    return result.returncode == 0

def process_folder(translation_source_dir, generation_dir, golden_dir):
    """
    지정된 translation 디렉토리에서 데이터를 처리하여 반환합니다.
    - translation_source_dir: 번역된 결과가 들어있는 디렉토리 (ex: cpp-java)
    - generation_dir: generation_output 디렉토리 (ex: generation_output)
    - golden_dir: golden 디렉토리
    """
    data = []
    # translation_source_dir의 마지막 경로명(예: cpp-java) 추출
    subfolder_name = os.path.basename(translation_source_dir)

    for root, _, files in os.walk(translation_source_dir):
        for file in files:
            if file.endswith(".py") or file.endswith(".java") or file.endswith(".cpp"):
                lang = file.split(".")[-1]
                src_file_path = os.path.join(root, file)

                # golden 파일 경로
                golden_file_path = os.path.join(golden_dir, subfolder_name, file)

                # generation 파일 경로
                generation_file_path = os.path.join(generation_dir, subfolder_name, file)
                
                # generation json 파일 경로
                json_file_path = generation_file_path.replace(f".{lang}", ".json")

                # 파일 존재 여부 체크
                if not os.path.exists(json_file_path):
                    print(f"Warning: Missing JSON file for {generation_file_path}")
                    continue

                if not os.path.exists(golden_file_path):
                    print(f"Warning: Missing golden file for {src_file_path}")
                    continue

                if not os.path.exists(generation_file_path):
                    print(f"Warning: Missing generation file for {src_file_path}")
                    continue

                # JSON 데이터 읽기 (generation_output 폴더 기준)
                with open(json_file_path, "r") as f:
                    json_data = json.load(f)

                prompt = json_data.get("translation_prompt", "No prompt available")

                # 컴파일 결과 확인
                if compile_code(src_file_path, lang):
                    # 컴파일 성공 시: chosen은 generation 파일에서 추출
                    with open(generation_file_path, "r") as f:
                        chosen_code = f.read()
                    reject_code = ""  # 성공 시 reject 없음
                else:
                    # 컴파일 실패 시: chosen은 golden 파일에서, reject는 translation 파일에서 추출
                    with open(golden_file_path, "r") as f:
                        chosen_code = f.read()
                    with open(generation_file_path, "r") as f:
                        reject_code = f.read()

                data.append({
                    "prompt": prompt,
                    "chosen": chosen_code,
                    "rejected": reject_code
                })

    return data

if __name__ == "__main__":
    # 디렉토리 경로 설정
    translation_dir = "translation_output"  # 번역 결과물
    generation_dir = "generation_output"    # generation 결과물
    golden_dir = "../codes/src-tgt"                # golden 코드 디렉토리
    output_path = "preference_dataset"

    all_data = []

    # 각 하위 폴더 처리 (예: cpp-java, cpp-py 등)
    for subfolder in os.listdir(translation_dir):
        subfolder_path = os.path.join(translation_dir, subfolder)
        if os.path.isdir(subfolder_path):
            print(f"Processing {subfolder_path}...")
            folder_data = process_folder(subfolder_path, generation_dir, golden_dir)
            all_data.extend(folder_data)

    # 단일 DataFrame으로 결합
    df = pd.DataFrame(all_data)
    
    # Hugging Face Dataset 변환 및 저장
    combined_dataset = Dataset.from_pandas(df)
    
    # 데이터셋 분할 (여기서는 그냥 전체를 train으로 두었음)
    dataset_dict = DatasetDict({"train": combined_dataset})
    
    # 분할된 데이터셋 저장
    dataset_dict.save_to_disk(output_path)

    print(f"Combined dataset saved to {output_path}")
