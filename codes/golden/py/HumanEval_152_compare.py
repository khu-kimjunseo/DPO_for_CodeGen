from typing import List

def compare(game: List[int],guess: List[int]) -> List[int]:
    return [abs(x-y) for x,y in zip(game,guess)]