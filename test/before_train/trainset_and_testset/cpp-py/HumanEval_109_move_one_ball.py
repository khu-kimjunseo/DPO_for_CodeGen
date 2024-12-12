from typing import List

def move_one_ball(arr: List[int]) -> bool:
    if (arr.empty()) {
        return true;
    }
    std::vector<int> sorted_array = arr;
    std::sort(sorted_array.begin(), sorted_array.end());
    std::vector<int> my_arr;
    long min_value = *std::min_element(arr.begin(), arr.end());
    long min_index = std::find(arr.begin(), arr.end(), min_value) - arr.begin();
    my_arr.insert(my_arr.end(), arr.begin() + min_index, arr.end());
    my_arr.insert(my_arr.end(), arr.begin(), arr.begin() + min_index);
    return my_arr == sorted_array;

def check(candidate):
    assert candidate([3, 4, 5, 1, 2]) == True
    assert candidate([3, 5, 10, 1, 2]) == True
    assert candidate([4, 3, 1, 2]) == False
    assert candidate([3, 5, 4, 1, 2]) == False
    assert candidate([]) == True

def test_check():
    check(move_one_ball)

test_check()
