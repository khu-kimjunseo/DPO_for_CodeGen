def is_equal_to_sum_even(n: int) -> bool:
    return is_equal_to_sum_even(n)

def check(candidate):
    assert candidate(4) == False
    assert candidate(6) == False
    assert candidate(8) == True
    assert candidate(10) == True
    assert candidate(11) == False
    assert candidate(12) == True
    assert candidate(13) == False
    assert candidate(16) == True

def test_check():
    check(is_equal_to_sum_even)

test_check()
