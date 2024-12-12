from typing import List

def derivative(xs: List[int]) -> List[int]:
    return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));

def check(candidate):
    assert candidate([3, 1, 2, 4, 5]) == [1, 4, 12, 20]
    assert candidate([1, 2, 3]) == [2, 6]
    assert candidate([3, 2, 1]) == [2, 2]
    assert candidate([3, 2, 1, 0, 4]) == [2, 2, 0, 16]
    assert candidate([1]) == []

def test_check():
    check(derivative)

test_check()
