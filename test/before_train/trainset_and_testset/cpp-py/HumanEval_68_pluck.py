from typing import List

def pluck(arr: List[int]) -> List[int]:
    return [x for x in arr if x % 2 == 0]

def check(candidate):
    assert candidate([4, 2, 3]) == [2, 1]
    assert candidate([1, 2, 3]) == [2, 1]
    assert candidate([]) == []
    assert candidate([5, 0, 3, 0, 4, 2]) == [0, 1]
    assert candidate([1, 2, 3, 0, 5, 3]) == [0, 3]
    assert candidate([5, 4, 8, 4, 8]) == [4, 1]
    assert candidate([7, 6, 7, 1]) == [6, 1]
    assert candidate([7, 9, 7, 1]) == []

def test_check():
    check(pluck)

test_check()