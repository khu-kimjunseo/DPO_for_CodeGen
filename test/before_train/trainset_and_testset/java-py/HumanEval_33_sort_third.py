from typing import List

def sort_third(l: List[int]) -> List[int]:
    return sort_third(l, 0, len(l)-1)

def check(candidate):
    assert candidate([5, 6, 3, 4, 8, 9, 2]) == [2, 6, 3, 4, 8, 9, 5]
    assert candidate([5, 8, 3, 4, 6, 9, 2]) == [2, 8, 3, 4, 6, 9, 5]
    assert candidate([5, 6, 9, 4, 8, 3, 2]) == [2, 6, 9, 4, 8, 3, 5]
    assert candidate([5, 6, 3, 4, 8, 9, 2, 1]) == [2, 6, 3, 4, 8, 9, 5, 1]

def test_check():
    check(sort_third)

test_check()