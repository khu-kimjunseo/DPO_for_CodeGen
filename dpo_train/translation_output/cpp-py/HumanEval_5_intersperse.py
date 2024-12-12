from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    """
    Intersperse a list of numbers with a given delimiter.

    :param numbers: A list of numbers.
    :param delimeter: The delimiter to use.
    :return: A list of intersperseable numbers.
    """
    return intersperse(numbers, delimeter)

def check(candidate):
    assert candidate([], 7) == []
    assert candidate([5, 6, 3, 2], 8) == [5, 8, 6, 8, 3, 8, 2]
    assert candidate([2, 2, 2], 2) == [2, 2, 2, 2, 2]

def test_check():
    check(intersperse)

test_check()
