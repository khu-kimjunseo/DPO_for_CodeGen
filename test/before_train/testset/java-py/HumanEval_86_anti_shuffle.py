def anti_shuffle(s: str) -> str:
    return s.replace(" ", "").replace("-", "").replace("+", "").replace(".", "").replace("/", "").replace("\\", "").replace("'", "").replace("\"", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "
def check(candidate):
    assert candidate('Hi') == 'Hi'
    assert candidate('hello') == 'ehllo'
    assert candidate('number') == 'bemnru'
    assert candidate('abcd') == 'abcd'
    assert candidate('Hello World!!!') == 'Hello !!!Wdlor'
    assert candidate('') == ''
    assert candidate('Hi. My name is Mister Robot. How are you?') == '.Hi My aemn is Meirst .Rboot How aer ?ouy'

def test_check():
    check(anti_shuffle)

test_check()
