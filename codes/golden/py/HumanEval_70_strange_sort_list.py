from typing import List

def strange_sort_list(lst: List[int]) -> List[int]:
    res, switch = [], True
    while lst:
        res.append(min(lst) if switch else max(lst))
        lst.remove(res[-1])
        switch = not switch
    return res