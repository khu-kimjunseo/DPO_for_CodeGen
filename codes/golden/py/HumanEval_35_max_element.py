from typing import List

def max_element(l: List[int]) -> int:
    m = l[0]
    for e in l:
        if e > m:
            m = e
    return m