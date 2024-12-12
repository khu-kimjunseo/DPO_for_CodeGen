def vowels_count(s: str) -> int:
    return Problem.vowelsCount(s)

def check(candidate):
    assert candidate('abcde') == 2
    assert candidate('Alone') == 3
    assert candidate('key') == 2
    assert candidate('bye') == 1
    assert candidate('keY') == 2
    assert candidate('bYe') == 1
    assert candidate('ACEDY') == 3

def test_check():
    check(vowels_count)

test_check()
