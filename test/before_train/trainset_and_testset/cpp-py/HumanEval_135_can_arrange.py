from typing import List

def can_arrange(arr: List[int]) -> int:
    return can_arrange(arr[0])

def check(candidate):
    assert candidate([1, 2, 4, 3, 5]) == 3
    assert candidate([1, 2, 4, 5]) == -1
    assert candidate([1, 4, 2, 5, 6, 7, 8, 9, 10]) == 2
    assert candidate([4, 8, 5, 7, 3]) == 4
    assert candidate([]) == -1

def test_check():
    check(can_arrange)

test_check()