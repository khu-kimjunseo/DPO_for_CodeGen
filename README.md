# DPO for CodeGen

이 레포지토리는 **DPO (Direct Preference Optimization)** 알고리즘을 CodeGen 모델에 적용하는 방법을 다룹니다.  
다음은 프로젝트의 주요 워크플로우입니다:

1. 환경설정
2. DPO 훈련
3. 컴파일 결과 확인

---

## 1. 환경설정

### 요구 사항
- Python >= 3.8
- PyTorch >= 1.10
- 기타 의존성은 `requirements.txt` 파일에 명시되어 있습니다.

### 설치 방법
1. 이 레포지토리를 클론합니다:
    ```bash
    git clone https://github.com/khu-kimjunseo/DPO_for_CodeGen.git
    cd DPO_for_CodeGen
    ```

2. 필요한 패키지를 설치합니다:
    ```bash
    pip install -r requirements.txt
    ```

3. (선택 사항) GPU 사용을 위해 PyTorch가 CUDA를 지원하도록 설치되었는지 확인하세요:
    ```bash
    python -c "import torch; print(torch.cuda.is_available())"
    ```

---

## 2. DPO 훈련

### 훈련 실행

DPO 알고리즘으로 모델을 훈련시키려면 다음 명령을 실행하세요:
```bash
python dpo_train/dpo_train.py
```
---

## 3. 컴파일 결과 확인

### 훈련 실행

훈련이 완료된 후, 결과를 확인하려면 다음 명령을 사용하세요:
```bash
python test/compile.py <directory> <language>
```
---

## 참고 자료

- [Direct Preference Optimization: Your Language Model is Secretly a Reward Model](https://arxiv.org/abs/2305.18290)
- [DPO Trainer](https://huggingface.co/docs/trl/main/en/dpo_trainer)
- [Salesforce CodeGen 모델](https://huggingface.co/Salesforce/codegen-350M-multi)
- [MultiPL-C2C 데이터셋](https://huggingface.co/datasets/zilu-peter-tang/MultiPL-C2C)
