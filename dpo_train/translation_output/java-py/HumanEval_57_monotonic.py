from typing import List

def monotonic(l: List[int]) -> bool:
    if len(l) == 0:
        return True
    if len(l) == 1:
        return monotonic(l[0])
    return monotonic(l[0:1]) and monotonic(l[1:])

def check(candidate):
    assert candidate([1, 2, 4, 10]) == True
    assert candidate([1, 2, 4, 20]) == True
    assert candidate([1, 20, 4, 10]) == False
    assert candidate([4, 1, 0, -10]) == True
    assert candidate([4, 1, 1, 0]) == True
    assert candidate([1, 2, 3, 2, 5, 60]) == False
    assert candidate([1, 2, 3, 4, 5, 60]) == True
    assert candidate([9, 9, 9, 9]) == True

def test_check():
    check(monotonic)

test_check()
