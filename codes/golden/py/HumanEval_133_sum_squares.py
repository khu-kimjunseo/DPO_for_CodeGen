from typing import List

def sum_squares(lst: List[float]) -> int:
    import math
    squared = 0
    for i in lst:
        squared += math.ceil(i)**2
    return squared