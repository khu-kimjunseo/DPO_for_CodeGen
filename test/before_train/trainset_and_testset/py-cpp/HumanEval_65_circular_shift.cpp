#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string circular_shift(long x, long shift) {
    std::stringstream ss;
    ss << x;
    std::string s = ss.str();
    if (shift > len(s)) {
        return s[::-1];
    } else {
        return s[len(s) - shift:] + s[:len(s) - shift] + s;
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
