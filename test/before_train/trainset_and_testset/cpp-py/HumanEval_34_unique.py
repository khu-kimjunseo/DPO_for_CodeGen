from typing import List

def unique(l: List[int]) -> List[int]:
    return [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x not in [x for x in l if x
def check(candidate):
    assert candidate([5, 3, 5, 2, 3, 3, 9, 0, 123]) == [0, 2, 3, 5, 9, 123]

def test_check():
    check(unique)

test_check()
