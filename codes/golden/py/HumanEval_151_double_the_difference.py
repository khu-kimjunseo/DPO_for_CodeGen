from typing import List

def double_the_difference(lst: List[float]) -> int:
    return sum([i**2 for i in lst if i > 0 and i%2!=0 and "." not in str(i)])