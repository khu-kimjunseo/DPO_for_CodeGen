def fib4(n: int) -> int:
    if n == 0:
        return 1
    elif n == 1:
        return 2
    elif n == 2:
        return 3
    elif n == 3:
        return 4
    else:
        return fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4) + fib4(n-5) + fib4(n-6) + fib4(n-7) + fib4(n-8) + fib4(n-9)

def check(candidate):
    assert candidate(5) == 4
    assert candidate(8) == 28
    assert candidate(10) == 104
    assert candidate(12) == 386

def test_check():
    check(fib4)

test_check()
