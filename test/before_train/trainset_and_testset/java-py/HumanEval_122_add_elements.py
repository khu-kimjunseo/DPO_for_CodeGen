from typing import List

def add_elements(arr: List[int], k: int) -> int:
    return arr.stream().limit(k).filter(i -> i.toString().length() <= 2).mapToLong(i -> i).sum()

def check(candidate):
    assert candidate([1, -2, -3, 41, 57, 76, 87, 88, 99], 3) == -4
    assert candidate([111, 121, 3, 4000, 5, 6], 2) == 0
    assert candidate([11, 21, 3, 90, 5, 6, 7, 8, 9], 4) == 125
    assert candidate([111, 21, 3, 4000, 5, 6, 7, 8, 9], 4) == 24
    assert candidate([1], 1) == 1

def test_check():
    check(add_elements)

test_check()
