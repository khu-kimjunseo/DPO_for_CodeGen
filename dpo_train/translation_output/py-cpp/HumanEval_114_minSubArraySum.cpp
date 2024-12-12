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
int main() {
    auto candidate = minSubArraySum;
    assert(candidate((std::vector<long>({(long)2, (long)3, (long)4, (long)1, (long)2, (long)4}))) == (1));
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)-3}))) == (-6));
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)-3, (long)2, (long)-10}))) == (-14));
    assert(candidate((std::vector<long>({(long)-9999999999999999}))) == (-9999999999999999));
    assert(candidate((std::vector<long>({(long)0, (long)10, (long)20, (long)1000000}))) == (0));
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)-3, (long)10, (long)-5}))) == (-6));
    assert(candidate((std::vector<long>({(long)100, (long)-1, (long)-2, (long)-3, (long)10, (long)-5}))) == (-6));
    assert(candidate((std::vector<long>({(long)10, (long)11, (long)13, (long)8, (long)3, (long)4}))) == (3));
    assert(candidate((std::vector<long>({(long)100, (long)-33, (long)32, (long)-1, (long)0, (long)-2}))) == (-33));
    assert(candidate((std::vector<long>({(long)-10}))) == (-10));
    assert(candidate((std::vector<long>({(long)7}))) == (7));
    assert(candidate((std::vector<long>({(long)1, (long)-1}))) == (-1));
}
