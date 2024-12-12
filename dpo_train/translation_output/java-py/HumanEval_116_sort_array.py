from typing import List

def sort_array(arr: List[int]) -> List[int]:
    return sorted(arr, (a, b) -> {
        int aCount = Long.bitCount(Math.abs(a));
        int bCount = Long.bitCount(Math.abs(b));
        if (aCount == bCount) {
            return Long.compare(a, b);
        }
        return Integer.compare(aCount, bCount);
    });

def check(candidate):
    assert candidate([1, 5, 2, 3, 4]) == [1, 2, 4, 3, 5]
    assert candidate([-2, -3, -4, -5, -6]) == [-4, -2, -6, -5, -3]
    assert candidate([1, 0, 2, 3, 4]) == [0, 1, 2, 4, 3]
    assert candidate([]) == []
    assert candidate([2, 5, 77, 4, 5, 3, 5, 7, 2, 3, 4]) == [2, 2, 4, 4, 3, 3, 5, 5, 5, 7, 77]
    assert candidate([3, 6, 44, 12, 32, 5]) == [32, 3, 5, 6, 12, 44]
    assert candidate([2, 4, 8, 16, 32]) == [2, 4, 8, 16, 32]
    assert candidate([2, 4, 8, 16, 32]) == [2, 4, 8, 16, 32]

def test_check():
    check(sort_array)

test_check()
