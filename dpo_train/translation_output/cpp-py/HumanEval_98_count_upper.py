def count_upper(s: str) -> int:
    return count_upper(s.upper())

def check(candidate):
    assert candidate('aBCdEf') == 1
    assert candidate('abcdefg') == 0
    assert candidate('dBBE') == 0
    assert candidate('B') == 0
    assert candidate('U') == 1
    assert candidate('') == 0
    assert candidate('EEEE') == 2

def test_check():
    check(count_upper)

test_check()
