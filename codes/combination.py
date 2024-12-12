import os
import re

def get_files_by_extension(directory: str, ext: str):
    """주어진 디렉토리에서 특정 확장자를 가진 파일 목록을 반환"""
    return [f for f in os.listdir(directory) if os.path.isfile(os.path.join(directory, f)) and f.endswith('.' + ext)]

def get_basename(filename: str):
    """파일명에서 확장자를 뺀 베이스 이름 반환"""
    return os.path.splitext(filename)[0]

def remove_cpp_main(code: str) -> str:
    # C++ main 함수 패턴: int main(...) { ... }
    pattern = re.compile(r'int\s+main\s*\([^)]*\)\s*\{.*?\}', re.DOTALL)
    return re.sub(pattern, '', code)

def remove_java_main(code: str) -> str:
    # Java main 함수 패턴: public static void main(...) { ... }
    pattern = re.compile(r'public\s+static\s+void\s+main\s*\([^)]*\)\s*\{.*?\}', re.DOTALL)
    return re.sub(pattern, '', code)

def remove_main_functions(root_directory: str):
    cpp_dir = os.path.join(root_directory, 'cpp')
    java_dir = os.path.join(root_directory, 'java')

    # cpp 디렉토리 내 .cpp 파일 처리
    if os.path.exists(cpp_dir):
        for f in os.listdir(cpp_dir):
            if f.endswith('.cpp'):
                file_path = os.path.join(cpp_dir, f)
                with open(file_path, 'r', encoding='utf-8') as infile:
                    code = infile.read()
                new_code = remove_cpp_main(code)
                with open(file_path, 'w', encoding='utf-8') as outfile:
                    outfile.write(new_code)

    # java 디렉토리 내 .java 파일 처리
    if os.path.exists(java_dir):
        for f in os.listdir(java_dir):
            if f.endswith('.java'):
                file_path = os.path.join(java_dir, f)
                with open(file_path, 'r', encoding='utf-8') as infile:
                    code = infile.read()
                new_code = remove_java_main(code)
                with open(file_path, 'w', encoding='utf-8') as outfile:
                    outfile.write(new_code)

def combine_files(file1_path: str, file2_path: str, out_path: str, label1: str, label2: str):
    """두 파일을 읽어 하나의 파일로 합쳐서 저장하는 함수"""
    with open(file1_path, 'r', encoding='utf-8') as f1:
        code1 = f1.read()
    with open(file2_path, 'r', encoding='utf-8') as f2:
        code2 = f2.read()
    
    combined = f"### {label1} version\n\n{code1}\n\n### {label2} version\n\n{code2}\n"
    with open(out_path, 'w', encoding='utf-8') as out_f:
        out_f.write(combined)

def pair_files(root_dir: str):
    # 각 언어별 디렉토리
    py_dir = os.path.join(root_dir, 'golden/py')
    cpp_dir = os.path.join(root_dir, 'cpp_preprocessed')
    java_dir = os.path.join(root_dir, 'java_preprocessed')

    # 출력 디렉토리
    out_dir = os.path.join(root_dir, 'src-tgt')
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)
    
    # 각 디렉토리에서 파일 목록 얻기
    py_files = get_files_by_extension(py_dir, 'py')
    cpp_files = get_files_by_extension(cpp_dir, 'cpp')
    java_files = get_files_by_extension(java_dir, 'java')

    # 베이스 이름 집합
    py_bases = {get_basename(f) for f in py_files}
    cpp_bases = {get_basename(f) for f in cpp_files}
    java_bases = {get_basename(f) for f in java_files}

    # 언어별 확장자 매핑
    lang_ext = {
        'py': 'py',
        'cpp': 'cpp',
        'java': 'java'
    }

    # 조합별 디렉토리 생성
    combo_dirs = [
        'py-cpp', 'cpp-py',
        'py-java', 'java-py',
        'cpp-java', 'java-cpp'
    ]
    for d in combo_dirs:
        combo_dir_path = os.path.join(out_dir, d)
        if not os.path.exists(combo_dir_path):
            os.makedirs(combo_dir_path)

    # py-cpp
    py_cpp_common = py_bases.intersection(cpp_bases)
    for base_name in py_cpp_common:
        py_path = os.path.join(py_dir, base_name + '.py')
        cpp_path = os.path.join(cpp_dir, base_name + '.cpp')
        # py->cpp
        out_path_py_cpp = os.path.join(out_dir, 'py-cpp', f"{base_name}.{lang_ext['cpp']}")
        combine_files(py_path, cpp_path, out_path_py_cpp, "Python", "C++")
        # cpp->py
        out_path_cpp_py = os.path.join(out_dir, 'cpp-py', f"{base_name}.{lang_ext['py']}")
        combine_files(cpp_path, py_path, out_path_cpp_py, "C++", "Python")

    # py-java
    py_java_common = py_bases.intersection(java_bases)
    for base_name in py_java_common:
        py_path = os.path.join(py_dir, base_name + '.py')
        java_path = os.path.join(java_dir, base_name + '.java')
        # py->java
        out_path_py_java = os.path.join(out_dir, 'py-java', f"{base_name}.{lang_ext['java']}")
        combine_files(py_path, java_path, out_path_py_java, "Python", "Java")
        # java->py
        out_path_java_py = os.path.join(out_dir, 'java-py', f"{base_name}.{lang_ext['py']}")
        combine_files(java_path, py_path, out_path_java_py, "Java", "Python")

    # cpp-java
    cpp_java_common = cpp_bases.intersection(java_bases)
    for base_name in cpp_java_common:
        cpp_path = os.path.join(cpp_dir, base_name + '.cpp')
        java_path = os.path.join(java_dir, base_name + '.java')
        # cpp->java
        out_path_cpp_java = os.path.join(out_dir, 'cpp-java', f"{base_name}.{lang_ext['java']}")
        combine_files(cpp_path, java_path, out_path_cpp_java, "C++", "Java")
        # java->cpp
        out_path_java_cpp = os.path.join(out_dir, 'java-cpp', f"{base_name}.{lang_ext['cpp']}")
        combine_files(java_path, cpp_path, out_path_java_cpp, "Java", "C++")

if __name__ == "__main__":
    root_directory = "../golden"  # 실제 디렉토리 경로 지정
    # 1. main 함수 제거
    remove_main_functions(root_directory)
    # 2. 파일 조합
    pair_files(root_directory)
