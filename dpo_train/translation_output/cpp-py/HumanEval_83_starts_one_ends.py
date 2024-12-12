def starts_one_ends(n: int) -> int:
    return starts_one_ends(n / 10) + starts_one_ends(n % 10)

def check(candidate):
    assert candidate(1) == 1
    assert candidate(2) == 18
    assert candidate(3) == 180
    assert candidate(4) == 1800
    assert candidate(5) == 18000

def test_check():
    check(starts_one_ends)

test_check()
