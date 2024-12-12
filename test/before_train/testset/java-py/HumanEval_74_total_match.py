from typing import List

def total_match(lst1: List[str], lst2: List[str]) -> List[str]:
    return lst1.stream().map(str -> str.upper()).collect(Collectors.toList());

def check(candidate):
    assert candidate([], []) == []
    assert candidate(['hi', 'admin'], ['hi', 'hi']) == ['hi', 'hi']
    assert candidate(['hi', 'admin'], ['hi', 'hi', 'admin', 'project']) == ['hi', 'admin']
    assert candidate(['4'], ['1', '2', '3', '4', '5']) == ['4']
    assert candidate(['hi', 'admin'], ['hI', 'Hi']) == ['hI', 'Hi']
    assert candidate(['hi', 'admin'], ['hI', 'hi', 'hi']) == ['hI', 'hi', 'hi']
    assert candidate(['hi', 'admin'], ['hI', 'hi', 'hii']) == ['hi', 'admin']
    assert candidate([], ['this']) == []
    assert candidate(['this'], []) == []

def test_check():
    check(total_match)

test_check()
