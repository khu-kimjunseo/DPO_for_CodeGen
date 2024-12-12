#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> intersperse(std::vector<long> numbers, long delimeter) {
    if (numbers.empty()) {
        return {};
    }

    std::vector<long> result;

    for (auto n = numbers.begin(); n != numbers.end() - 1; ++n) {
        result.push_back(*n);
        result.push_back(delimeter);
    }

    result.push_back(numbers.back());

    return result;
}
int main() {
    auto candidate = intersperse;
    assert(candidate((std::vector<long>()), (7)) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)3, (long)2})), (8)) == (std::vector<long>({(long)5, (long)8, (long)6, (long)8, (long)3, (long)8, (long)2})));
    assert(candidate((std::vector<long>({(long)2, (long)2, (long)2})), (2)) == (std::vector<long>({(long)2, (long)2, (long)2, (long)2, (long)2})));
}
