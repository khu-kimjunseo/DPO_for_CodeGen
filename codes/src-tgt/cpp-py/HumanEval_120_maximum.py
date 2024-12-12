### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> maximum(std::vector<long> arr, long k) {
    if (k == 0) {
        return {};
    }
    std::sort(arr.begin(), arr.end());
    std::vector<long> ans(arr.end() - k, arr.end());
    return ans;
}


### Python version

from typing import List

def maximum(arr: List[int], k: int) -> List[int]:
    if k == 0:
        return []
    arr.sort()
    ans = arr[-k:]
    return ans
