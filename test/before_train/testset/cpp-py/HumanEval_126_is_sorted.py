from typing import List

def is_sorted(lst: List[int]) -> bool:
    if len(lst) == 0:
        return True
    if len(lst) == 1:
        return False
    if len(lst) == 2:
        return is_sorted(lst[0:2]) and is_sorted(lst[2:])
    if len(lst) == 3:
        return is_sorted(lst[0:3]) and is_sorted(lst[3:])
    if len(lst) == 4:
        return is_sorted(lst[0:4]) and is_sorted(lst[4:])
    if len(lst) == 5:
        return is_sorted(lst[0:5]) and is_sorted(lst[5:])
    if len(lst) == 6:
        return is_sorted(lst[0:6]) and is_sorted(lst[6:])
    if len(lst) == 7:
        return is_sorted(lst[0:7]) and is_sorted(lst[7:])
    if len(lst) == 8:
        return is_sorted(lst[0:8]) and is_sorted(lst[8:])
    if len(lst) == 9:
        return is_sorted(lst[0:9]) and is_sorted(lst[9:])
    if len(lst) == 10:
        return is_sorted(lst[0:10]) and is_sorted(lst[10:])
    if len(lst) == 11:
        return is_sorted(lst[0:11]) and is_sorted(lst[11:])
    if len(lst) == 12:
        return is_sorted(lst[0:12]) and is_sorted(lst[12:])
    if len(lst) == 13:
        return is_sorted(lst[0:13]) and is_sorted(lst[13:])
    if len(lst) == 14:
        return is_sorted(lst[0:14]) and is_sorted(lst[14:])
    if len(lst) == 15:
        return is_sorted(lst[0:15]) and is_sorted(lst[15:])
    if len(lst) == 16:
        return is_sorted(lst[0:16]) and is_sorted(lst[16:])
    if len(lst) == 17:
        return is_sorted(lst[0:17]) and is_sorted(lst[17:])
    if len(lst) == 18:
        return is_sorted(lst[0:18]) and is_sorted(lst[18:])
    if len(lst) == 19:
        return is_sorted(lst[0:19]) and is_sorted(lst[19:])
    if len(lst) == 20:
        return is_sorted(lst[0:20]) and is_sorted(lst[20:])
    if len(lst) == 21:
        return is_sorted(lst[0:21]) and is_sorted(lst[21:])
    if
def check(candidate):
    assert candidate([5]) == True
    assert candidate([1, 2, 3, 4, 5]) == True
    assert candidate([1, 3, 2, 4, 5]) == False
    assert candidate([1, 2, 3, 4, 5, 6]) == True
    assert candidate([1, 2, 3, 4, 5, 6, 7]) == True
    assert candidate([1, 3, 2, 4, 5, 6, 7]) == False
    assert candidate([]) == True
    assert candidate([1]) == True
    assert candidate([3, 2, 1]) == False
    assert candidate([1, 2, 2, 2, 3, 4]) == False
    assert candidate([1, 2, 3, 3, 3, 4]) == False
    assert candidate([1, 2, 2, 3, 3, 4]) == True
    assert candidate([1, 2, 3, 4]) == True

def test_check():
    check(is_sorted)

test_check()
