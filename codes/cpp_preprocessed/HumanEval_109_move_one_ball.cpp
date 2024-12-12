#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool move_one_ball(std::vector<long> arr) {
    if (arr.empty()) {
        return true;
    }
    std::vector<long> sorted_array = arr;
    std::sort(sorted_array.begin(), sorted_array.end());
    std::vector<long> my_arr;
    long min_value = *std::min_element(arr.begin(), arr.end());
    long min_index = std::find(arr.begin(), arr.end(), min_value) - arr.begin();
    my_arr.insert(my_arr.end(), arr.begin() + min_index, arr.end());
    my_arr.insert(my_arr.end(), arr.begin(), arr.begin() + min_index);
    return my_arr == sorted_array;
}
