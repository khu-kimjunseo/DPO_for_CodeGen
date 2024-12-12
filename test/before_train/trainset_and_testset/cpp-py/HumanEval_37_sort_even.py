from typing import List

def sort_even(l: List[int]) -> List[int]:
    return sort_even(l[0:l.size()/2])

def check(candidate):
    assert candidate([1, 2, 3]) == [1, 2, 3]
    assert candidate([5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10]) == [-10, 3, -5, 2, -3, 3, 5, 0, 9, 1, 123]
    assert candidate([5, 8, -12, 4, 23, 2, 3, 11, 12, -10]) == [-12, 8, 3, 4, 5, 2, 12, 11, 23, -10]

def test_check():
    check(sort_even)

test_check()
