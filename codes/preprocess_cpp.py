import os

def remove_main_function_from_cpp(input_path: str, output_path: str):
    """
    .cpp 파일에서 main 함수를 찾아 해당 함수 블록을 제거한 뒤 결과를 output_path에 저장하는 함수
    """
    with open(input_path, 'r', encoding='utf-8') as infile:
        lines = infile.readlines()

    result_lines = []
    inside_main = False
    brace_count = 0
    found_main = False

    for line in lines:
        # main 함수 시작점을 찾지 못한 상태일 때
        if not inside_main and not found_main:
            # main 함수 시그니처 감지: 간단히 'int main(' 문자열로 찾는다.
            if 'int main(' in line:
                # 여기서부터 main 함수 시작
                inside_main = True
                found_main = True
                # main 함수의 시작 블록 '{'를 찾아 brace_count 관리
                # 라인 안에 '{'가 있을 수 있으므로 체크
                # 일반적으로 main 함수 정의 라인에 '{'가 바로 이어지거나 다음 줄에 있을 수 있음.
                # 아래는 같은 라인에서 '{'를 찾는 예.
                if '{' in line:
                    brace_count = 1
                else:
                    brace_count = 0
            else:
                # main을 아직 못찾았으므로 해당 라인을 결과에 추가
                result_lines.append(line)
        elif inside_main:
            # main 함수 안에 들어와 있다면 중괄호 개수 파악
            brace_count += line.count('{')
            brace_count -= line.count('}')

            # brace_count가 0이 되었다면 main 함수 블록이 끝남
            if brace_count == 0:
                inside_main = False
            # main 함수 블록 안은 결과에 추가하지 않음 (건너뛰기)
        else:
            # main 함수를 이미 제거한 후, 남은 라인은 그냥 결과에 추가
            result_lines.append(line)

    # 결과를 output_path에 저장
    with open(output_path, 'w', encoding='utf-8') as outfile:
        outfile.writelines(result_lines)

def process_cpp_directory(root_directory: str):
    cpp_dir = os.path.join(root_directory, 'cpp')
    cpp_nomains_dir = os.path.join(root_directory, 'cpp_preprocessed')

    if not os.path.exists(cpp_nomains_dir):
        os.makedirs(cpp_nomains_dir)

    if os.path.exists(cpp_dir):
        for f in os.listdir(cpp_dir):
            if f.endswith('.cpp'):
                input_path = os.path.join(cpp_dir, f)
                output_path = os.path.join(cpp_nomains_dir, f)
                remove_main_function_from_cpp(input_path, output_path)

if __name__ == "__main__":
    root_directory = "golden"  # 실제 경로로 수정
    process_cpp_directory(root_directory)
