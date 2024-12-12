from typing import List

def factorize(n: int) -> List[int]:
    fact = factorize(n)
    return [f % n for f in fact]

def check(candidate):
    assert candidate(2) == [2]
    assert candidate(4) == [2, 2]
    assert candidate(8) == [2, 2, 2]
    assert candidate(57) == [3, 19]
    assert candidate(3249) == [3, 3, 19, 19]
    assert candidate(185193) == [3, 3, 3, 19, 19, 19]
    assert candidate(20577) == [3, 19, 19, 19]
    assert candidate(18) == [2, 3, 3]

def test_check():
    check(factorize)

test_check()
