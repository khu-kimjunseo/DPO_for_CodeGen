def triangle_area(a: int, b: int, c: int) -> float:
    return Problem.triangleArea(a, b, c)

def check(candidate):
    assert candidate(3, 4, 5) == 6.0
    assert candidate(1, 2, 10) == -1
    assert candidate(4, 8, 5) == 8.18
    assert candidate(2, 2, 2) == 1.73
    assert candidate(1, 2, 3) == -1
    assert candidate(10, 5, 7) == 16.25
    assert candidate(2, 6, 3) == -1
    assert candidate(1, 1, 1) == 0.43
    assert candidate(2, 2, 10) == -1

def test_check():
    check(triangle_area)

test_check()
