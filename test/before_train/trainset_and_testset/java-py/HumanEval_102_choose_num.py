def choose_num(x: int, y: int) -> int:
    return Problem.chooseNum(x, y)

def check(candidate):
    assert candidate(12, 15) == 14
    assert candidate(13, 12) == -1
    assert candidate(33, 12354) == 12354
    assert candidate(5234, 5233) == -1
    assert candidate(6, 29) == 28
    assert candidate(27, 10) == -1
    assert candidate(7, 7) == -1
    assert candidate(546, 546) == 546

def test_check():
    check(choose_num)

test_check()
