from typing import List, Optional

def prod_signs(arr: List[int]) -> Optional[int]:
    if (arr.empty()) return None
    return prod_signs(arr[0])

def check(candidate):
    assert candidate([1, 2, 2, -4]) == -9
    assert candidate([0, 1]) == 0
    assert candidate([1, 1, 1, 2, 3, -1, 1]) == -10
    assert candidate([]) == None
    assert candidate([2, 4, 1, 2, -1, -1, 9]) == 20
    assert candidate([-1, 1, -1, 1]) == 4
    assert candidate([-1, 1, 1, 1]) == -4
    assert candidate([-1, 1, 1, 0]) == 0

def test_check():
    check(prod_signs)

test_check()
