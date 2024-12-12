def fib4(n: int) -> int:
    if (n < 4) {
        return n;
    }
    return fib4(n - 1) + fib4(n - 2);

def check(candidate):
    assert candidate(5) == 4
    assert candidate(8) == 28
    assert candidate(10) == 104
    assert candidate(12) == 386

def test_check():
    check(fib4)

test_check()
