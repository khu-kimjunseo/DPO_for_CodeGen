from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if (strings.isEmpty()) {
        return None
    }

    longest = strings.get(0)
    for s in strings:
        if (s.length() > longest.length()) {
            longest = s
        }
    return longest

def check(candidate):
    assert candidate([]) == None
    assert candidate(['x', 'y', 'z']) == 'x'
    assert candidate(['x', 'yyy', 'zzzz', 'www', 'kkkk', 'abc']) == 'zzzz'

def test_check():
    check(longest)

test_check()
