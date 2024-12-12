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
