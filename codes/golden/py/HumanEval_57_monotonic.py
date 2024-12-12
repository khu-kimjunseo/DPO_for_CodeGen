from typing import List

def monotonic(l: List[int]) -> bool:
    if l == sorted(l) or l == sorted(l, reverse=True):
        return True
    return False