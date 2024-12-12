from typing import List

def exchange(lst1: List[int], lst2: List[int]) -> str:
    if len(lst1) == 0:
        return "YES"
    if len(lst2) == 0:
        return "NO"
    if len(lst1) == 1:
        return exchange(lst1, lst2)
    if len(lst2) == 1:
        return exchange(lst1, lst2)
    return exchange(lst1, lst2)

def check(candidate):
    assert candidate([1, 2, 3, 4], [1, 2, 3, 4]) == 'YES'
    assert candidate([1, 2, 3, 4], [1, 5, 3, 4]) == 'NO'
    assert candidate([1, 2, 3, 4], [2, 1, 4, 3]) == 'YES'
    assert candidate([5, 7, 3], [2, 6, 4]) == 'YES'
    assert candidate([5, 7, 3], [2, 6, 3]) == 'NO'
    assert candidate([3, 2, 6, 1, 8, 9], [3, 5, 5, 1, 1, 1]) == 'NO'
    assert candidate([100, 200], [200, 200]) == 'YES'

def test_check():
    check(exchange)

test_check()
