#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> intersperse(std::vector<long> numbers, long delimeter) {
    std::vector<long> result;
    std::vector<long>::iterator it = numbers.begin();
    std::vector<long>::iterator end = numbers.end();
    for (; it != end; ++it) {
        result.push_back(*it);
        result.push_back(delimeter);
    }
    return result;
}
int main() {
    auto candidate = intersperse;
    assert(candidate((std::vector<long>()), (7)) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)3, (long)2})), (8)) == (std::vector<long>({(long)5, (long)8, (long)6, (long)8, (long)3, (long)8, (long)2})));
    assert(candidate((std::vector<long>({(long)2, (long)2, (long)2})), (2)) == (std::vector<long>({(long)2, (long)2, (long)2, (long)2, (long)2})));
}
