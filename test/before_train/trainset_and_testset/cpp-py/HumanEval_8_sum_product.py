from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum_product(numbers[0:len(numbers)-1])

def check(candidate):
    assert candidate([]) == (0, 1)
    assert candidate([1, 1, 1]) == (3, 1)
    assert candidate([100, 0]) == (100, 0)
    assert candidate([3, 5, 7]) == (15, 105)
    assert candidate([10]) == (10, 10)

def test_check():
    check(sum_product)

test_check()
