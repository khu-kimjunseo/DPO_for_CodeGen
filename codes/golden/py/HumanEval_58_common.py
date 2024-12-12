from typing import List

def common(l1: List[int], l2: List[int]) -> List[int]:
    ret = set()
    for e1 in l1:
        for e2 in l2:
            if e1 == e2:
                ret.add(e1)
    return sorted(list(ret))