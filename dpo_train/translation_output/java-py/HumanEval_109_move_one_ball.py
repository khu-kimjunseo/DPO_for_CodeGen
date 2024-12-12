from typing import List

def move_one_ball(arr: List[int]) -> bool:
    if (arr.size() == 0) {
        return true;
    }
    List<Long> sortedArray = new ArrayList<>(arr);
    Collections.sort(sortedArray);
    int minIndex = arr.indexOf(Collections.min(arr));
    List<Long> myArr = new ArrayList<>(arr.subList(minIndex, arr.size()));
    myArr.addAll(arr.subList(0, minIndex));
    for (int i = 0; i < arr.size(); i++) {
        if (!myArr.get(i).equals(sortedArray.get(i))) {
            return false;
        }
    }
    return true;

def check(candidate):
    assert candidate([3, 4, 5, 1, 2]) == True
    assert candidate([3, 5, 10, 1, 2]) == True
    assert candidate([4, 3, 1, 2]) == False
    assert candidate([3, 5, 4, 1, 2]) == False
    assert candidate([]) == True

def test_check():
    check(move_one_ball)

test_check()
