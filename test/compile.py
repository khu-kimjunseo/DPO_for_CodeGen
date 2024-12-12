import os
import subprocess
import argparse
import logging

def setup_logging(log_file):
    # 로그 설정
    logging.basicConfig(
        filename=log_file,  # 로그 파일명
        level=logging.INFO,
        format='%(asctime)s - %(levelname)s - %(message)s',
        datefmt='%Y-%m-%d %H:%M:%S'
    )

def check_compilation_success_rate(directory, extension):
    """
    주어진 디렉토리 내의 특정 확장자를 가진 파일의 컴파일 성공률을 계산합니다.

    Parameters:
    - directory (str): 파일을 검사할 디렉토리 경로.
    - extension (str): 컴파일을 시도할 파일의 확장자 (예: 'js', 'java', 'py', 'cpp').

    Returns:
    - success_rate (float): 컴파일 성공률 (백분율).
    """

    # 각 언어별 파일 확장자와 컴파일 명령어 정의
    COMPILE_COMMANDS = {
        'java': lambda filename: subprocess.run(['javac', filename], stdout=subprocess.PIPE, stderr=subprocess.PIPE),
        'py': lambda filename: subprocess.run(['python', '-m', 'py_compile', filename], stdout=subprocess.PIPE, stderr=subprocess.PIPE),
        'cpp': lambda filename: subprocess.run(['g++', filename, '-o', f"{filename}.out"], stdout=subprocess.PIPE, stderr=subprocess.PIPE),
    }

    # 로그 파일 이름 설정
    log_file = f"{directory.replace('/', '_')}_compilation_results.log"
    setup_logging(log_file)

    # 컴파일 결과 집계
    total_files = 0
    successful_compilations = 0

    # 디렉토리 내 파일 컴파일
    for root, _, files in os.walk(directory):
        for file in files:
            # 파일 확장자 체크
            ext = file.split('.')[-1]
            if ext == extension and ext in COMPILE_COMMANDS:
                total_files += 1
                filepath = os.path.join(root, file)
                # 컴파일 시도
                result = COMPILE_COMMANDS[ext](filepath)
                if result.returncode == 0:
                    successful_compilations += 1
                    logging.info(f"Successfully compiled: {filepath}")
                else:
                    logging.error(f"Failed to compile {filepath}. Error:\n{result.stderr.decode()}")

    # 실패한 파일 개수 계산
    failed_compilations = total_files - successful_compilations

    # 컴파일 성공률 계산 및 로그 기록
    if total_files > 0:
        success_rate = (successful_compilations / total_files) * 100
        logging.info(f"Directory: {directory}")
        logging.info(f"Total Files: {total_files}")
        logging.info(f"Successful Compilations: {successful_compilations}")
        logging.info(f"Failed Compilations: {failed_compilations}")
        logging.info(f"Success Rate: {success_rate:.2f}%")
        print(f"Directory: {directory}, Total Files: {total_files}, Successful Compilations: {successful_compilations}, Failed Compilations: {failed_compilations}, Success Rate: {success_rate:.2f}%")
    else:
        logging.info("No files found for compilation.")
        print("No files found for compilation.")
    return success_rate if total_files > 0 else 0

if __name__ == "__main__":
    # 명령줄 인자 파싱
    parser = argparse.ArgumentParser(description="Check compilation success rate for specific file types in a directory.")
    parser.add_argument("directory", type=str, help="Directory to search files in")
    parser.add_argument("extension", type=str, help="File extension to compile (e.g., 'js', 'java', 'py', 'cpp')")
    args = parser.parse_args()

    # 실행
    check_compilation_success_rate(args.directory, args.extension)
