from typing import Dict

def check_dict_case(dict: Dict[str, str]) -> bool:
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
def check(candidate):
    assert candidate({ 'p': 'pineapple', 'b': 'banana' }) == True
    assert candidate({ 'p': 'pineapple', 'A': 'banana', 'B': 'banana' }) == False
    assert candidate({ 'p': 'pineapple', '5': 'banana', 'a': 'apple' }) == False
    assert candidate({ 'Name': 'John', 'Age': '36', 'City': 'Houston' }) == False
    assert candidate({ 'STATE': 'NC', 'ZIP': '12345' }) == True
    assert candidate({ 'fruit': 'Orange', 'taste': 'Sweet' }) == True
    assert candidate({  }) == False

def test_check():
    check(check_dict_case)

test_check()
