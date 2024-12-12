from typing import List

def add(lst: List[int]) -> int:
    return lst.add(lst.size() - 1)

def check(candidate):
    assert candidate([4, 88]) == 88
    assert candidate([4, 5, 6, 7, 2, 122]) == 122
    assert candidate([4, 0, 6, 7]) == 0
    assert candidate([4, 4, 6, 8]) == 12

def test_check():
    check(add)

test_check()
