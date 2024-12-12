def is_bored(S: str) -> int:
    return is_bored(S.lower())

def check(candidate):
    assert candidate('Hello world') == 0
    assert candidate('Is the sky blue?') == 0
    assert candidate('I love It !') == 1
    assert candidate('bIt') == 0
    assert candidate('I feel good today. I will be productive. will kill It') == 2
    assert candidate('You and I are going for a walk') == 0

def test_check():
    check(is_bored)

test_check()
