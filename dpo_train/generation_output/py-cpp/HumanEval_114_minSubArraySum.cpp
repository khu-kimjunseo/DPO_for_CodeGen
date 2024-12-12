### Python version

from typing import List

def minSubArraySum(nums: List[int]) -> int:
    max_sum = 0
    s = 0
    for num in nums:
        s += -num
        if (s < 0):
            s = 0
        max_sum = max(s, max_sum)
    if max_sum == 0:
        max_sum = max(-i for i in nums)
    min_sum = -max_sum
    return min_sum

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
long minSubArraySum(std::vector<long> nums) {
    long max_sum = 0;
    for (long i = 0; i < nums.size(); i++) {
        max_sum += nums[i];
    }
    return max_sum;
}

long minSubArraySum(std::vector<int> nums) {
    long max_sum = 0;
    for (long i = 0; i < nums.size(); i++) {
        max_sum += nums[i];
    }
    return max_sum;
}

long minSubArraySum(std::vector<std::string> nums) {
    long max_sum = 0;
    for (long i = 0; i < nums.size(); i++) {
        max_sum += nums[i].size();
    }
    return max_sum;
}

long minSubArraySum(std::map<std::string, std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->second.size();
    }
    return max_sum;
}

long minSubArraySum(std::unordered_map<std::string, std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->second.size();
    }
    return max_sum;
}

long minSubArraySum(std::unordered_set<std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->size();
    }
    return max_sum;
}

long minSubArraySum(std::unordered_multiset<std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->size();
    }
    return max_sum;
}

long minSubArraySum(std::set<std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->size();
    }
    return max_sum;
}

long minSubArraySum(std::multiset<std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->size();
    }
    return max_sum;
}

long minSubArraySum(std::multimap<std::string, std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->second.size();
    }
    return max_sum;
}

long minSubArraySum(std::unordered_multimap<std::string, std::string> nums) {
    long max_sum = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        max_sum += it->second.size();
