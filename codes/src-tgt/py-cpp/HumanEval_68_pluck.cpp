### Python version

from typing import List

def pluck(arr: List[int]) -> List[int]:
    if(len(arr) == 0): return []
    evens = list(filter(lambda x: x%2 == 0, arr))
    if(evens == []): return []
    return [min(evens), arr.index(min(evens))]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> pluck(std::vector<long> arr) {
    if(arr.size() == 0) return {};
    std::vector<long> evens;
    for(auto x: arr) if(x%2 == 0) evens.push_back(x);
    if(evens.size() == 0) return {};
    long min_val = *std::min_element(evens.begin(), evens.end());
    return {min_val, std::find(arr.begin(), arr.end(), min_val) - arr.begin()};
}

