from typing import List
from typing import Tuple
from typing import Optional
def largest_smallest_integers(lst: List[int]) -> Tuple[Optional[int], Optional[int]]:
    smallest = list(filter(lambda x: x < 0, lst))
    largest = list(filter(lambda x: x > 0, lst))
    return (max(smallest) if smallest else None, min(largest) if largest else None)