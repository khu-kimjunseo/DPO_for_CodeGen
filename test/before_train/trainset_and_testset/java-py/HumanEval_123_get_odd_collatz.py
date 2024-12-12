from typing import List

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = Problem.getOddCollatz(n)
    oddCollatz.sort(null)
    return oddCollatz

def check(candidate):
    assert candidate(14) == [1, 5, 7, 11, 13, 17]
    assert candidate(5) == [1, 5]
    assert candidate(12) == [1, 3, 5]
    assert candidate(1) == [1]

def test_check():
    check(get_odd_collatz)

test_check()
