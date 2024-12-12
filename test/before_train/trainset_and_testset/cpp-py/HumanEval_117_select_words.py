from typing import List

def select_words(s: str, n: int) -> List[str]:
    return select_words(s, n)

def check(candidate):
    assert candidate('Mary had a little lamb', 4) == ['little']
    assert candidate('Mary had a little lamb', 3) == ['Mary', 'lamb']
    assert candidate('simple white space', 2) == []
    assert candidate('Hello world', 4) == ['world']
    assert candidate('Uncle sam', 3) == ['Uncle']
    assert candidate('', 4) == []
    assert candidate('a b c d e f', 1) == ['b', 'c', 'd', 'f']

def test_check():
    check(select_words)

test_check()
