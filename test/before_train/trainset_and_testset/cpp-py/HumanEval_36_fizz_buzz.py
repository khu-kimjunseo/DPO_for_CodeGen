def fizz_buzz(n: int) -> int:
    ans = 0;
    for i in range(n):
        ans += (i % 11 == 0 || i % 13 == 0)
    return ans;

def check(candidate):
    assert candidate(50) == 0
    assert candidate(78) == 2
    assert candidate(79) == 3
    assert candidate(100) == 3
    assert candidate(200) == 6
    assert candidate(4000) == 192
    assert candidate(10000) == 639
    assert candidate(100000) == 8026

def test_check():
    check(fizz_buzz)

test_check()
