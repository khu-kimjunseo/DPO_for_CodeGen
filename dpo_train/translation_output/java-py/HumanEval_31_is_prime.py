def is_prime(n: int) -> bool:
    if (n < 2) {
        return False
    }
    for (long k = 2; k < n; k++) {
        if (n % k == 0) {
            return False
        }
    }
    return True

def check(candidate):
    assert candidate(6) == False
    assert candidate(101) == True
    assert candidate(11) == True
    assert candidate(13441) == True
    assert candidate(61) == True
    assert candidate(4) == False
    assert candidate(1) == False
    assert candidate(5) == True
    assert candidate(11) == True
    assert candidate(17) == True
    assert candidate(85) == False
    assert candidate(77) == False
    assert candidate(255379) == False

def test_check():
    check(is_prime)

test_check()
