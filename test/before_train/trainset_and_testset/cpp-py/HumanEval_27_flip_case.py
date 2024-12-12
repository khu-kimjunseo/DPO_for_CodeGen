def flip_case(string: str) -> str:
    return flip_case(string.lower()) + flip_case(string.upper())

def check(candidate):
    assert candidate('') == ''
    assert candidate('Hello!') == 'hELLO!'
    assert candidate('These violent delights have violent ends') == 'tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS'

def test_check():
    check(flip_case)

test_check()