from typing import List

def get_positive(l: List[int]) -> List[int]:
    return (List[int]) l.stream().filter(e -> e > 0).collect(Collectors.toList());

def check(candidate):
    assert candidate([-1, -2, 4, 5, 6]) == [4, 5, 6]
    assert candidate([5, 3, -5, 2, 3, 3, 9, 0, 123, 1, -10]) == [5, 3, 2, 3, 3, 9, 123, 1]
    assert candidate([-1, -2]) == []
    assert candidate([]) == []

def test_check():
    check(get_positive)

test_check()
