def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

def check(candidate):
    assert candidate(15) == 5
    assert candidate(27) == 3
    assert candidate(63) == 7
    assert candidate(330) == 11
    assert candidate(13195) == 29

def test_check():
    check(largest_prime_factor)

test_check()
