def solve(N: int) -> str:
    return str(N)

def check(candidate):
    assert candidate(1000) == '1'
    assert candidate(150) == '110'
    assert candidate(147) == '1100'
    assert candidate(333) == '1001'
    assert candidate(963) == '10010'

def test_check():
    check(solve)

test_check()
