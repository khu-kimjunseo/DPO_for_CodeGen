def multiply(a: int, b: int) -> int:
    return a * b

def check(candidate):
    assert candidate(148, 412) == 16
    assert candidate(19, 28) == 72
    assert candidate(2020, 1851) == 0
    assert candidate(14, -15) == 20
    assert candidate(76, 67) == 42
    assert candidate(17, 27) == 49
    assert candidate(0, 1) == 0
    assert candidate(0, 0) == 0

def test_check():
    check(multiply)

test_check()
