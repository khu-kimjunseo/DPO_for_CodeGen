def encrypt(s: str) -> str:
    return Problem.encrypt(s.encode("utf-8"))

def check(candidate):
    assert candidate('hi') == 'lm'
    assert candidate('asdfghjkl') == 'ewhjklnop'
    assert candidate('gf') == 'kj'
    assert candidate('et') == 'ix'
    assert candidate('faewfawefaewg') == 'jeiajeaijeiak'
    assert candidate('hellomyfriend') == 'lippsqcjvmirh'
    assert candidate('dxzdlmnilfuhmilufhlihufnmlimnufhlimnufhfucufh') == 'hbdhpqrmpjylqmpyjlpmlyjrqpmqryjlpmqryjljygyjl'
    assert candidate('a') == 'e'

def test_check():
    check(encrypt)

test_check()
