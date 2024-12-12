def is_simple_power(x: int, n: int) -> bool:
    if (n == 1) {
        return x == 1;
    }
    long power = 1;
    while (power < x) {
        power = power * n;
    }
    return power == x;

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
