def decimal_to_binary(decimal: int) -> str:
    return decimalToBinary(decimal)

def check(candidate):
    assert candidate(0) == 'db0db'
    assert candidate(32) == 'db100000db'
    assert candidate(103) == 'db1100111db'
    assert candidate(15) == 'db1111db'

def test_check():
    check(decimal_to_binary)

test_check()
