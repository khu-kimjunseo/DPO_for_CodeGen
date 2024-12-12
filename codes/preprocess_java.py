import os
import re

def get_files_by_extension(directory: str, ext: str):
    """주어진 디렉토리에서 특정 확장자를 가진 파일 목록을 반환"""
    return [f for f in os.listdir(directory) 
            if os.path.isfile(os.path.join(directory, f)) and f.endswith('.' + ext)]

def remove_java_main(code: str) -> str:
    # 단순 정규식: public static void main(...) { ... }
    pattern = re.compile(r'public\s+static\s+void\s+main\s*\([^)]*\)\s*\{.*?\}', re.DOTALL)
    return re.sub(pattern, '', code)

def remove_main_functions_and_save_to_new_dir(root_directory: str):
    # 입력 디렉토리
    java_dir = os.path.join(root_directory, 'java')

    # 출력 디렉토리 (새 디렉토리 생성)
    java_nomains_dir = os.path.join(root_directory, 'java_preprocessed')

    if not os.path.exists(java_nomains_dir):
        os.makedirs(java_nomains_dir)

    # java 디렉토리 처리
    if os.path.exists(java_dir):
        for f in os.listdir(java_dir):
            if f.endswith('.java'):
                file_path = os.path.join(java_dir, f)
                with open(file_path, 'r', encoding='utf-8') as infile:
                    code = infile.read()

                new_code = remove_java_main(code)

                # 새로운 디렉토리에 동일한 파일명으로 저장
                new_file_path = os.path.join(java_nomains_dir, f)
                with open(new_file_path, 'w', encoding='utf-8') as outfile:
                    outfile.write(new_code)

if __name__ == "__main__":
    root_directory = "golden" 
    remove_main_functions_and_save_to_new_dir(root_directory)
