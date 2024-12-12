def get_max_triples(n: int) -> int:
    ans = 0;
    for i in range(1, n+1):
        ans += get_max_triples(i)
    return ans

def check(candidate):
    assert candidate(5) == 1
    assert candidate(6) == 4
    assert candidate(10) == 36
    assert candidate(100) == 53361

def test_check():
    check(get_max_triples)

test_check()
