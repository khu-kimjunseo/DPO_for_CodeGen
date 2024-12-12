### C++ version

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

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean moveOneBall(ArrayList<Long> arr) {
        if (arr.size() == 0) {
            return true;
        }
        long min_value = *std::min_element(arr.begin(), arr.end());
        long min_index = std::find(arr.begin(), arr.end(), min_value) - arr.begin();
        long max_value = *std::max_element(arr.begin(), arr.end());
        long max_index = std::find(arr.begin(), arr.end(), max_value) - arr.begin();
        long sum = 0;
        for (long i = min_index; i < max_index; i++) {
            sum += arr[i];
        }
        long new_sum = sum + arr[max_index];
        if (new_sum == min_value) {
            return true;
        }
        return false;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(new Solution().moveOneBall(Arrays.asList(arr)));
    }
}
