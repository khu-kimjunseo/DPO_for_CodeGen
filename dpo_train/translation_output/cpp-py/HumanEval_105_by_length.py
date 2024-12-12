from typing import List

def by_length(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def check(candidate):
    assert candidate([2, 1, 1, 4, 5, 8, 2, 3]) == ['Eight', 'Five', 'Four', 'Three', 'Two', 'Two', 'One', 'One']
    assert candidate([]) == []
    assert candidate([1, -1, 55]) == ['One']
    assert candidate([1, -1, 3, 2]) == ['Three', 'Two', 'One']
    assert candidate([9, 4, 8]) == ['Nine', 'Eight', 'Four']

def test_check():
    check(by_length)

test_check()