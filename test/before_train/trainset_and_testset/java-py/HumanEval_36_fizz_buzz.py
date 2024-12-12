def fizz_buzz(n: int) -> int:
    return Problem.fizzBuzz(n)

def check(candidate):
    assert candidate(50) == 0
    assert candidate(78) == 2
    assert candidate(79) == 3
    assert candidate(100) == 3
    assert candidate(200) == 6
    assert candidate(4000) == 192
    assert candidate(10000) == 639
    assert candidate(100000) == 8026

def test_check():
    check(fizz_buzz)

test_check()
