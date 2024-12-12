def cycpattern_check(a: str, b: str) -> bool:
    return Problem().cycpatternCheck(a, b)

def check(candidate):
    assert candidate('xyzw', 'xyw') == False
    assert candidate('yello', 'ell') == True
    assert candidate('whattup', 'ptut') == False
    assert candidate('efef', 'fee') == True
    assert candidate('abab', 'aabb') == False
    assert candidate('winemtt', 'tinem') == True

def test_check():
    check(cycpattern_check)

test_check()
