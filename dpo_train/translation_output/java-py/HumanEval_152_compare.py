from typing import List

def compare(game: List[int], guess: List[int]) -> List[int]:
    return (game, guess)

def check(candidate):
    assert candidate([1, 2, 3, 4, 5, 1], [1, 2, 3, 4, 2, -2]) == [0, 0, 0, 0, 3, 3]
    assert candidate([0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0]) == [0, 0, 0, 0, 0, 0]
    assert candidate([1, 2, 3], [-1, -2, -3]) == [2, 4, 6]
    assert candidate([1, 2, 3, 5], [-1, 2, 3, 4]) == [2, 0, 0, 1]

def test_check():
    check(compare)

test_check()
