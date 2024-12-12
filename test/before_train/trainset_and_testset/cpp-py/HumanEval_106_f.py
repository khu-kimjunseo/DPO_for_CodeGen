from typing import List

def f(n: int) -> List[int]:
    ret = []
    for i in range(n):
        ret.append(i)
    return ret

def check(candidate):
    assert candidate(5) == [1, 2, 6, 24, 15]
    assert candidate(7) == [1, 2, 6, 24, 15, 720, 28]
    assert candidate(1) == [1]
    assert candidate(3) == [1, 2, 6]

def test_check():
    check(f)

test_check()
