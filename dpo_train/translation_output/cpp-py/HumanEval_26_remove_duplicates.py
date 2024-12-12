from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    result = []
    for n in numbers:
        if n in result:
            continue
        result.append(n)
    return result

def check(candidate):
    assert candidate([]) == []
    assert candidate([1, 2, 3, 4]) == [1, 2, 3, 4]
    assert candidate([1, 2, 3, 2, 4, 3, 5]) == [1, 4, 5]

def test_check():
    check(remove_duplicates)

test_check()
