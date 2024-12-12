from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return filter_by_prefix(strings, prefix)

def check(candidate):
    assert candidate([], 'john') == []
    assert candidate(['xxx', 'asd', 'xxy', 'john doe', 'xxxAAA', 'xxx'], 'xxx') == ['xxx', 'xxxAAA', 'xxx']

def test_check():
    check(filter_by_prefix)

test_check()
