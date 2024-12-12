def how_many_times(string: str, substring: str) -> int:
    return Problem.howManyTimes(string, substring)

def check(candidate):
    assert candidate('', 'x') == 0
    assert candidate('xyxyxyx', 'x') == 4
    assert candidate('cacacacac', 'cac') == 4
    assert candidate('john doe', 'john') == 1

def test_check():
    check(how_many_times)

test_check()
