from typing import List

def will_it_fly(q: List[int], w: int) -> bool:
    return will_it_fly(q, w) and will_it_fly(q, w-1)

def check(candidate):
    assert candidate([3, 2, 3], 9) == True
    assert candidate([1, 2], 5) == False
    assert candidate([3], 5) == True
    assert candidate([3, 2, 3], 1) == False
    assert candidate([1, 2, 3], 6) == False
    assert candidate([5], 5) == True

def test_check():
    check(will_it_fly)

test_check()
