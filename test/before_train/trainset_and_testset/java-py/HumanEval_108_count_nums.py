from typing import List

def count_nums(arr: List[int]) -> int:
    return len(arr)

def check(candidate):
    assert candidate([]) == 0
    assert candidate([-1, -2, 0]) == 0
    assert candidate([1, 1, 2, -2, 3, 4, 5]) == 6
    assert candidate([1, 6, 9, -6, 0, 1, 5]) == 5
    assert candidate([1, 100, 98, -7, 1, -1]) == 4
    assert candidate([12, 23, 34, -45, -56, 0]) == 5
    assert candidate([0, 1]) == 1
    assert candidate([1]) == 1

def test_check():
    check(count_nums)

test_check()
