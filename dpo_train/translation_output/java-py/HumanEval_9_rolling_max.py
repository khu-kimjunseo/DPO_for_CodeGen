from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    return Problem().rollingMax(numbers)

def check(candidate):
    assert candidate([]) == []
    assert candidate([1, 2, 3, 4]) == [1, 2, 3, 4]
    assert candidate([4, 3, 2, 1]) == [4, 4, 4, 4]
    assert candidate([3, 2, 3, 100, 3]) == [3, 3, 3, 100, 100]

def test_check():
    check(rolling_max)

test_check()
