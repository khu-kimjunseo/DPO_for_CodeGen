### Python version

from typing import List

def specialFilter(nums: List[int]) -> int:
    
    count = 0
    for num in nums:
        if num > 10:
            odd_digits = (1, 3, 5, 7, 9)
            number_as_string = str(num)
            if int(number_as_string[0]) in odd_digits and int(number_as_string[-1]) in odd_digits:
                count += 1
        
    return count

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
long specialFilter(std::vector<long> nums) {
    long count = 0;
    for (auto num: nums) {
        if (num > 10) {
            std::string number_as_string = std::to_string(num);
            if (number_as_string.front() % 2 == 1 && number_as_string.back() % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

