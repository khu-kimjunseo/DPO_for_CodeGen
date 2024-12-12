from typing import List

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

def check(candidate):
    assert candidate([]) == ''
    assert candidate(['x', 'y', 'z']) == 'xyz'
    assert candidate(['x', 'y', 'z', 'w', 'k']) == 'xyzwk'

def test_check():
    check(concatenate)

test_check()