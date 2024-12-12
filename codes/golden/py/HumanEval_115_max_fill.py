import math
from typing import List

def max_fill(grid: List[List[int]], capacity: int) -> int:
    return sum([math.ceil(sum(arr)/capacity) for arr in grid])