from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return values.stream().filter(x -> x instanceof int).map(x -> (int) x).collect(Collectors.toCollection(ArrayList::new));

def check(candidate):
    assert candidate([]) == []
    assert candidate([4, {  }, [], 23.2, 9, 'adasd']) == [4, 9]
    assert candidate([3, 'c', 3, 3, 'a', 'b']) == [3, 3, 3]

def test_check():
    check(filter_integers)

test_check()
