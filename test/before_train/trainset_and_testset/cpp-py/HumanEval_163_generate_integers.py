from typing import List

def generate_integers(a: int, b: int) -> List[int]:
    return [a, b]

def check(candidate):
    assert candidate(2, 10) == [2, 4, 6, 8]
    assert candidate(10, 2) == [2, 4, 6, 8]
    assert candidate(132, 2) == [2, 4, 6, 8]
    assert candidate(17, 89) == []

def test_check():
    check(generate_integers)

test_check()
