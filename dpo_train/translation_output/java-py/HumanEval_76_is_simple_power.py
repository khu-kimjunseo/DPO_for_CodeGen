def is_simple_power(x: int, n: int) -> bool:
    if (n == 1) return (x == 1);
    if (n == 2) return (x == x * x);
    if (n == 3) return (x == x * x * x);
    if (n == 4) return (x == x * x * x * x);
    if (n == 5) return (x == x * x * x * x * x);
    if (n == 6) return (x == x * x * x * x * x * x);
    if (n == 7) return (x == x * x * x * x * x * x * x);
    if (n == 8) return (x == x * x * x * x * x * x * x * x);
    if (n == 9) return (x == x * x * x * x * x * x * x * x * x);
    if (n == 10) return (x == x * x * x * x * x * x * x * x * x * x);
    if (n == 11) return (x == x * x * x * x * x * x * x * x * x * x * x);
    if (n == 12) return (x == x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 13) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 14) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 15) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 16) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 17) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 18) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 19) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 20) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 21) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 22) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 23) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 24) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x
def check(candidate):
    assert candidate(16, 2) == True
    assert candidate(143214, 16) == False
    assert candidate(4, 2) == True
    assert candidate(9, 3) == True
    assert candidate(16, 4) == True
    assert candidate(24, 2) == False
    assert candidate(128, 4) == False
    assert candidate(12, 6) == False
    assert candidate(1, 1) == True
    assert candidate(1, 12) == True

def test_check():
    check(is_simple_power)

test_check()
