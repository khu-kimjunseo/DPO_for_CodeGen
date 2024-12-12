from typing import List

def all_prefixes(string: str) -> List[str]:
    return all_prefixes(string.lower())

def check(candidate):
    assert candidate('') == []
    assert candidate('asdfgh') == ['a', 'as', 'asd', 'asdf', 'asdfg', 'asdfgh']
    assert candidate('WWW') == ['W', 'WW', 'WWW']

def test_check():
    check(all_prefixes)

test_check()
