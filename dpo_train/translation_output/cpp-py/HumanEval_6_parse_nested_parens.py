from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    res = []
    paren_string = paren_string.replace("(", "")
    paren_string = paren_string.replace(")", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.
def check(candidate):
    assert candidate('(()()) ((())) () ((())()())') == [2, 3, 1, 3]
    assert candidate('() (()) ((())) (((())))') == [1, 2, 3, 4]
    assert candidate('(()(())((())))') == [4]

def test_check():
    check(parse_nested_parens)

test_check()
