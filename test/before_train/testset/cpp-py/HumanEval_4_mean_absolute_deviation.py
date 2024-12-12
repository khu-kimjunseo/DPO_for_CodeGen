from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    return mean_absolute_deviation(numbers[0:len(numbers)])

def check(candidate):
    assert candidate([1.0, 2.0]) == 0.5
    assert candidate([1.0, 2.0, 3.0, 4.0]) == 1.0
    assert candidate([1.0, 2.0, 3.0, 4.0, 5.0]) == 1.2

def test_check():
    check(mean_absolute_deviation)

test_check()
