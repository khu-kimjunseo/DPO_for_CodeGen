from typing import List

def eat(number: int, need: int, remaining: int) -> List[int]:
    return [number + need]

def check(candidate):
    assert candidate(5, 6, 10) == [11, 4]
    assert candidate(4, 8, 9) == [12, 1]
    assert candidate(1, 10, 10) == [11, 0]
    assert candidate(2, 11, 5) == [7, 0]
    assert candidate(4, 5, 7) == [9, 2]
    assert candidate(4, 5, 1) == [5, 0]

def test_check():
    check(eat)

test_check()
