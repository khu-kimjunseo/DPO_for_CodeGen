def truncate_number(number: float) -> float:
    return truncateNumber(number)

def check(candidate):
    assert candidate(3.5) == 0.5
    assert candidate(1.25) == 0.25
    assert candidate(123.0) == 0.0

def test_check():
    check(truncate_number)

test_check()
