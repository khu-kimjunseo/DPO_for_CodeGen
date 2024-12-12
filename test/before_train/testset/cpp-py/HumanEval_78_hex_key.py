def hex_key(num: str) -> int:
    return hex_key(num.replace("0x", ""))

def check(candidate):
    assert candidate('AB') == 1
    assert candidate('1077E') == 2
    assert candidate('ABED1A33') == 4
    assert candidate('2020') == 2
    assert candidate('123456789ABCDEF0') == 6
    assert candidate('112233445566778899AABBCCDDEEFF00') == 12

def test_check():
    check(hex_key)

test_check()
