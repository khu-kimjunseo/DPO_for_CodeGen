from typing import List

def match_parens(lst: List[str]) -> str:
    return check(lst.get(0) + lst.get(1)) || check(lst.get(1) + lst.get(0)) ? "Yes" : "No";

def check(candidate):
    assert candidate(['()(', ')']) == 'Yes'
    assert candidate([')', ')']) == 'No'
    assert candidate(['(()(())', '())())']) == 'No'
    assert candidate([')())', '(()()(']) == 'Yes'
    assert candidate(['(())))', '(()())((']) == 'Yes'
    assert candidate(['()', '())']) == 'No'
    assert candidate(['(()(', '()))()']) == 'Yes'
    assert candidate(['((((', '((())']) == 'No'
    assert candidate([')(()', '(()(']) == 'No'
    assert candidate([')(', ')(']) == 'No'
    assert candidate(['(', ')']) == 'Yes'
    assert candidate([')', '(']) == 'Yes'

def test_check():
    check(match_parens)

test_check()
