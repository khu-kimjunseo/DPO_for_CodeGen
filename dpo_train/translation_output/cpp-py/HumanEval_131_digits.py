def digits(n: int) -> int:
    return digits(n)

def check(candidate):
    assert candidate(5) == 5
    assert candidate(54) == 5
    assert candidate(120) == 1
    assert candidate(5014) == 5
    assert candidate(98765) == 315
    assert candidate(5576543) == 2625
    assert candidate(2468) == 0

def test_check():
    check(digits)

test_check()