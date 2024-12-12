#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long digitSum(std::string s) {
    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string s1;
    while (std::getline(ss, s1, ',')) {
        v.push_back(s1);
    }
    std::sort(v.begin(), v.end());
    long sum = 0;
    for (auto &s : v) {
        sum += digitSum(s);
    }
    return sum;
}
int main() {
    auto candidate = digitSum;
    assert(candidate(("")) == (0));
    assert(candidate(("abAB")) == (131));
    assert(candidate(("abcCd")) == (67));
    assert(candidate(("helloE")) == (69));
    assert(candidate(("woArBld")) == (131));
    assert(candidate(("aAaaaXa")) == (153));
    assert(candidate((" How are yOu?")) == (151));
    assert(candidate(("You arE Very Smart")) == (327));
}
