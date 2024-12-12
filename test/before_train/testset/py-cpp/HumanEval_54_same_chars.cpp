#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool same_chars(std::string s0, std::string s1) {
    std::string::size_type i0 = 0, i1 = 0;
    std::string::size_type j0 = 0, j1 = 0;
    std::string::size_type k0 = 0, k1 = 0;
    std::string s0_str = s0.substr(i0, i1);
    std::string s1_str = s1.substr(j0, j1);
    std::string::size_type i = 0;
    std::string::size_type j = 0;
    std::string::size_type k = 0;
    std::string s0_str_regex = s0_str.substr(i0, i1);
    std::string s1_str_regex = s1_str.substr(j0, j1);
    std::regex s0_regex = std::regex(s0_str_regex);
    std::regex s1_regex = std::regex(s1_str_regex);
    std::smatch sm;
    if (s0_regex.match(s0_str, sm)) {
        i0 = sm.position(0);
        j0 = sm.position(1);
        k0 = sm.position(2);
    }
    if (s1_regex.match(s1_str, sm)) {
        i1 = sm.position(0);
        j1 = sm.position(1);
        k1 = sm.position(2);
    }
    return same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1_str) && same_chars(s0_str, s1_str) &&
           same_chars(s0_str, s1
}
int main() {
    auto candidate = same_chars;
    assert(candidate(("eabcdzzzz"), ("dddzzzzzzzddeddabc")) == (true));
    assert(candidate(("abcd"), ("dddddddabc")) == (true));
    assert(candidate(("dddddddabc"), ("abcd")) == (true));
    assert(candidate(("eabcd"), ("dddddddabc")) == (false));
    assert(candidate(("abcd"), ("dddddddabcf")) == (false));
    assert(candidate(("eabcdzzzz"), ("dddzzzzzzzddddabc")) == (false));
    assert(candidate(("aabb"), ("aaccc")) == (false));
}
