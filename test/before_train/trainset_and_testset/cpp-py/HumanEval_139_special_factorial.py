def special_factorial(n: int) -> int:
    return special_factorial(n)

def check(candidate):
    assert candidate(4) == 288
    assert candidate(5) == 34560
    assert candidate(7) == 125411328000
    assert candidate(1) == 1

def test_check():
    check(special_factorial)

test_check()
