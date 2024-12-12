def triangle_area(a: int, h: int) -> float:
    return triangle_area(a, h) / float(h)

def check(candidate):
    assert candidate(5, 3) == 7.5
    assert candidate(2, 2) == 2.0
    assert candidate(10, 8) == 40.0

def test_check():
    check(triangle_area)

test_check()
