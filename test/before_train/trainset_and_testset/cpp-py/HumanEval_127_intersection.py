from typing import Tuple

def intersection(interval1: Tuple[int, int], interval2: Tuple[int, int]) -> str:
    return "YES" if intersection(interval1, interval2) else "NO"

def check(candidate):
    assert candidate((1, 2), (2, 3)) == 'NO'
    assert candidate((-1, 1), (0, 4)) == 'NO'
    assert candidate((-3, -1), (-5, 5)) == 'YES'
    assert candidate((-2, 2), (-4, 0)) == 'YES'
    assert candidate((-11, 2), (-1, -1)) == 'NO'
    assert candidate((1, 2), (3, 5)) == 'NO'
    assert candidate((1, 2), (1, 2)) == 'NO'
    assert candidate((-2, -2), (-3, -2)) == 'NO'

def test_check():
    check(intersection)

test_check()
