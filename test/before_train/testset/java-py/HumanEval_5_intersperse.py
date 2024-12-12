from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    """
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    [1, 2, 3]
    >>> intersperse([1, 2, 3], 2)
    
def check(candidate):
    assert candidate([], 7) == []
    assert candidate([5, 6, 3, 2], 8) == [5, 8, 6, 8, 3, 8, 2]
    assert candidate([2, 2, 2], 2) == [2, 2, 2, 2, 2]

def test_check():
    check(intersperse)

test_check()