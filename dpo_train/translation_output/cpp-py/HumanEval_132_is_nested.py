def is_nested(string: str) -> bool:
    return is_nested(string.replace("[", "").replace("]", "").replace("{", "").replace("}", "").replace("'", "").replace("\"", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'", "").replace("'",
def check(candidate):
    assert candidate('[[]]') == True
    assert candidate('[]]]]]]][[[[[]') == False
    assert candidate('[][]') == False
    assert candidate('[]') == False
    assert candidate('[[[[]]]]') == True
    assert candidate('[]]]]]]]]]]') == False
    assert candidate('[][][[]]') == True
    assert candidate('[[]') == False
    assert candidate('[]]') == False
    assert candidate('[[]][[') == True
    assert candidate('[[][]]') == True
    assert candidate('') == False
    assert candidate('[[[[[[[[') == False
    assert candidate(']]]]]]]]') == False

def test_check():
    check(is_nested)

test_check()
