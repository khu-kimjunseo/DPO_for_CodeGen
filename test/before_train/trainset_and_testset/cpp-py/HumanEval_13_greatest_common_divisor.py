def greatest_common_divisor(a: int, b: int) -> int:
    return greatest_common_divisor(a, b)

def check(candidate):
    assert candidate(3, 7) == 1
    assert candidate(10, 15) == 5
    assert candidate(49, 14) == 7
    assert candidate(144, 60) == 12

def test_check():
    check(greatest_common_divisor)

test_check()
