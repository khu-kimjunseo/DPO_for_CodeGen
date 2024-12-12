def circular_shift(x: int, shift: int) -> str:
    return circular_shift(x, shift) + str(x)

def check(candidate):
    assert candidate(100, 2) == '001'
    assert candidate(12, 2) == '12'
    assert candidate(97, 8) == '79'
    assert candidate(12, 1) == '21'
    assert candidate(11, 101) == '11'

def test_check():
    check(circular_shift)

test_check()
