from typing import List

def make_a_pile(n: int) -> List[int]:
    return Problem.makeAPile(n)

def check(candidate):
    assert candidate(3) == [3, 5, 7]
    assert candidate(4) == [4, 6, 8, 10]
    assert candidate(5) == [5, 7, 9, 11, 13]
    assert candidate(6) == [6, 8, 10, 12, 14, 16]
    assert candidate(8) == [8, 10, 12, 14, 16, 18, 20, 22]

def test_check():
    check(make_a_pile)

test_check()
