def is_palindrome(text: str) -> bool:
    if len(text) == 0:
        return True
    if len(text) == 1:
        return False
    if text[0] == text[-1]:
        return False
    for i in range(1, len(text)):
        if text[i] != text[-1 - i]:
            return False
    return True

def check(candidate):
    assert candidate('') == True
    assert candidate('aba') == True
    assert candidate('aaaaa') == True
    assert candidate('zbcd') == False
    assert candidate('xywyx') == True
    assert candidate('xywyz') == False
    assert candidate('xywzx') == False

def test_check():
    check(is_palindrome)

test_check()
