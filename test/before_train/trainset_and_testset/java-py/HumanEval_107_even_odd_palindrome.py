from typing import Tuple

def even_odd_palindrome(n: int) -> Tuple[int, int]:
    return even_odd_palindrome_python(n)

def check(candidate):
    assert candidate(123) == (8, 13)
    assert candidate(12) == (4, 6)
    assert candidate(3) == (1, 2)
    assert candidate(63) == (6, 8)
    assert candidate(25) == (5, 6)
    assert candidate(19) == (4, 6)
    assert candidate(9) == (4, 5)
    assert candidate(1) == (0, 1)

def test_check():
    check(even_odd_palindrome)

test_check()
