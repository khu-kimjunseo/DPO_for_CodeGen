from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

def check(candidate):
    assert candidate('(()()) ((())) () ((())()())') == ['(()())', '((()))', '()', '((())()())']
    assert candidate('() (()) ((())) (((())))') == ['()', '(())', '((()))', '(((())))']
    assert candidate('(()(())((())))') == ['(()(())((())))']
    assert candidate('( ) (( )) (( )( ))') == ['()', '(())', '(()())']

def test_check():
    check(separate_paren_groups)

test_check()
