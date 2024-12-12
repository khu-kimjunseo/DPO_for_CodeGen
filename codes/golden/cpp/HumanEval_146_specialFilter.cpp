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
int main() {
    auto candidate = specialFilter;
    assert(candidate((std::vector<long>({(long)5, (long)-2, (long)1, (long)-5}))) == (0));
    assert(candidate((std::vector<long>({(long)15, (long)-73, (long)14, (long)-15}))) == (1));
    assert(candidate((std::vector<long>({(long)33, (long)-2, (long)-3, (long)45, (long)21, (long)109}))) == (2));
    assert(candidate((std::vector<long>({(long)43, (long)-12, (long)93, (long)125, (long)121, (long)109}))) == (4));
    assert(candidate((std::vector<long>({(long)71, (long)-2, (long)-33, (long)75, (long)21, (long)19}))) == (3));
    assert(candidate((std::vector<long>({(long)1}))) == (0));
    assert(candidate((std::vector<long>())) == (0));
}
