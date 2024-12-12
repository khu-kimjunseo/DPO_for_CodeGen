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
std::vector<long> order_by_points(std::vector<long> nums) {
    auto digits_sum = [](long n) -> long {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        std::stringstream ss;
        ss << n;
        std::string s = ss.str();
        std::vector<long> v;
        for (auto c : s) {
            v.push_back(c - '0');
        }
        v[0] = v[0] * neg;
        return std::accumulate(v.begin(), v.end(), 0);
    };
    std::sort(nums.begin(), nums.end(), [&](long a, long b) {
        return digits_sum(a) < digits_sum(b);
    });
    return nums;
}


### Python version

from typing import List

def order_by_points(nums: List[int]) -> List[int]:
    def digits_sum(n):
        neg = 1
        if n < 0: n, neg = -1 * n, -1 
        n = [int(i) for i in str(n)]
        n[0] = n[0] * neg
        return sum(n)
    return sorted(nums, key=digits_sum)
