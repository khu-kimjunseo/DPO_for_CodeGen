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
std::vector<long> sort_array(std::vector<long> array) {
    if (array.empty()) {
        return std::vector<long>();
    } else {
        bool isReversed = (array[0] + array[array.size() - 1]) % 2 == 0;
        std::sort(array.begin(), array.end(), [&](long a, long b) {
            return isReversed ? a > b : a < b;
        });
        return array;
    }
}


### Python version

from typing import List

def sort_array(array: List[int]) -> List[int]:
    return [] if len(array) == 0 else sorted(array, reverse= (array[0]+array[-1]) % 2 == 0)
