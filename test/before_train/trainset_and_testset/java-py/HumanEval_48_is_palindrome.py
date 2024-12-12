def is_palindrome(text: str) -> bool:
    return Problem.isPalindrome(text.toLowerCase())

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
