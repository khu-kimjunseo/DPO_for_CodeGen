from typing import List

def order_by_points(nums: List[int]) -> List[int]:
    return nums[::-1]

def check(candidate):
    assert candidate([1, 11, -1, -11, -12]) == [-1, -11, 1, -12, 11]
    assert candidate([1234, 423, 463, 145, 2, 423, 423, 53, 6, 37, 3457, 3, 56, 0, 46]) == [0, 2, 3, 6, 53, 423, 423, 423, 1234, 145, 37, 46, 56, 463, 3457]
    assert candidate([]) == []
    assert candidate([1, -11, -32, 43, 54, -98, 2, -3]) == [-3, -32, -98, -11, 1, 2, 43, 54]
    assert candidate([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]) == [1, 10, 2, 11, 3, 4, 5, 6, 7, 8, 9]
    assert candidate([0, 6, 6, -76, -21, 23, 4]) == [-76, -21, 0, 4, 23, 6, 6]

def test_check():
    check(order_by_points)

test_check()
