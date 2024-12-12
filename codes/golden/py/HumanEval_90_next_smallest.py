from typing import List
from typing import Optional

def next_smallest(lst: List[int]) -> Optional[int]:
    lst = sorted(set(lst))
    return None if len(lst) < 2 else lst[1]