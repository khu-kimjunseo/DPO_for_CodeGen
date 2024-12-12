from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

def check(candidate):
    assert candidate('(()()) ((())) () ((())()())') == ['(()())', '((()))', '()', '((())()())']
    assert candidate('() (()) ((())) (((())))') == ['()', '(())', '((()))', '(((())))']
    assert candidate('(()(())((())))') == ['(()(())((())))']
    assert candidate('( ) (( )) (( )( ))') == ['()', '(())', '(()())']

def test_check():
    check(separate_paren_groups)

test_check()
