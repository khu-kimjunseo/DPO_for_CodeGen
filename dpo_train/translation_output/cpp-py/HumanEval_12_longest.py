from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    if len(strings) == 1:
        return strings[0]
    return longest(strings[1:])

def check(candidate):
    assert candidate([]) == None
    assert candidate(['x', 'y', 'z']) == 'x'
    assert candidate(['x', 'yyy', 'zzzz', 'www', 'kkkk', 'abc']) == 'zzzz'

def test_check():
    check(longest)

test_check()
