from typing import List
from typing import Tuple

def get_row(lst: List[List[int]], x: int) -> List[Tuple[int, int]]:
    coords = [(i, j) for i in range(len(lst)) for j in range(len(lst[i])) if lst[i][j] == x]
    return sorted(sorted(coords, key=lambda x: x[1], reverse=True), key=lambda x: x[0])