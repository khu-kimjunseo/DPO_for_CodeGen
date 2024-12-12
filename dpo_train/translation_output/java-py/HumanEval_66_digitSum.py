def digitSum(s: str) -> int:
    return Problem.digitSum(s.toLowerCase())

def check(candidate):
    assert candidate('') == 0
    assert candidate('abAB') == 131
    assert candidate('abcCd') == 67
    assert candidate('helloE') == 69
    assert candidate('woArBld') == 131
    assert candidate('aAaaaXa') == 153
    assert candidate(' How are yOu?') == 151
    assert candidate('You arE Very Smart') == 327

def test_check():
    check(digitSum)

test_check()
