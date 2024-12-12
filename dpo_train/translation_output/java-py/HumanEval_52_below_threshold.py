from typing import List

def below_threshold(l: List[int], t: int) -> bool:
    return Problem().belowThreshold(l, t)

def check(candidate):
    assert candidate([1, 2, 4, 10], 100) == True
    assert candidate([1, 20, 4, 10], 5) == False
    assert candidate([1, 20, 4, 10], 21) == True
    assert candidate([1, 20, 4, 10], 22) == True
    assert candidate([1, 8, 4, 10], 11) == True
    assert candidate([1, 8, 4, 10], 10) == False

def test_check():
    check(below_threshold)

test_check()
