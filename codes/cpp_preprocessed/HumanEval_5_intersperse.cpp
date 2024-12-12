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
