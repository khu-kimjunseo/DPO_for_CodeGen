from typing import List

def incr_list(l: List[int]) -> List[int]:
    return l.stream().map(e -> e + 1).collect(Collectors.toCollection(ArrayList::new));

def check(candidate):
    assert candidate([]) == []
    assert candidate([3, 2, 1]) == [4, 3, 2]
    assert candidate([5, 2, 5, 2, 3, 3, 9, 0, 123]) == [6, 3, 6, 3, 4, 4, 10, 1, 124]

def test_check():
    check(incr_list)

test_check()
