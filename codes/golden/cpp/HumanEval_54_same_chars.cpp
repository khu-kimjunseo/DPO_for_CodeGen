#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool same_chars(std::string s0, std::string s1) {
    return std::set<char>(s0.begin(), s0.end()) == std::set<char>(s1.begin(), s1.end());
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
