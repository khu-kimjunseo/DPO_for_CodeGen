def prime_fib(n: int) -> int:
    if n == 0:
        return 1
    else:
        return primeFib(n - 1) + primeFib(n - 2)

def check(candidate):
    assert candidate(1) == 2
    assert candidate(2) == 3
    assert candidate(3) == 5
    assert candidate(4) == 13
    assert candidate(5) == 89
    assert candidate(6) == 233
    assert candidate(7) == 1597
    assert candidate(8) == 28657
    assert candidate(9) == 514229
    assert candidate(10) == 433494437

def test_check():
    check(prime_fib)

test_check()
