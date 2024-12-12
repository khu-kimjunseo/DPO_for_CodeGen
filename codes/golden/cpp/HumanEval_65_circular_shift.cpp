#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string circular_shift(long x, long shift) {
    std::string s = std::to_string(x);
    if (shift > s.size()) {
        return std::string(s.rbegin(), s.rend());
    } else {
        return s.substr(s.size() - shift) + s.substr(0, s.size() - shift);
    }
}
int main() {
    auto candidate = circular_shift;
    assert(candidate((100), (2)) == ("001"));
    assert(candidate((12), (2)) == ("12"));
    assert(candidate((97), (8)) == ("79"));
    assert(candidate((12), (1)) == ("21"));
    assert(candidate((11), (101)) == ("11"));
}
