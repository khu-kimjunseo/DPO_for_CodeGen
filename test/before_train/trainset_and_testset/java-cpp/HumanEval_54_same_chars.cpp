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
    std::regex r0("[^a-zA-Z0-9]");
    std::regex r1("[^a-zA-Z0-9]");
    std::string s0_str = s0.substr(0, s0.size()-1);
    std::string s1_str = s1.substr(0, s1.size()-1);
    std::string s0_str_re = s0_str.substr(0, s0_str.size()-1);
    std::string s1_str_re = s1_str.substr(0, s1_str.size()-1);
    std::string s0_str_re_re = s0_str_re.substr(0, s0_str_re.size()-1);
    std::string s1_str_re_re = s1_str_re.substr(0, s1_str_re.size()-1);
    std::string s0_str_re_re_re = s0_str_re_re.substr(0, s0_str_re_re.size()-1);
    std::string s1_str_re_re_re = s1_str_re_re.substr(0, s1_str_re_re.size()-1);
    std::string s0_str_re_re_re_re = s0_str_re_re_re.substr(0, s0_str_re_re_re.size()-1);
    std::string s1_str_re_re_re_re = s1_str_re_re_re.substr(0, s1_str_re_re_re.size()-1);
    std::string s0_str_re_re_re_re_re = s0_str_re_re_re_re.substr(0, s0_str_re_re_re_re.size()-1);
    std::string s1_str_re_re_re_re_re_re = s1_str_re_re_re_re_re.substr(0, s1_str_re_re_re_re_re.size()-1);
    std::string s0_str_re_re_re_re_re_re_re_re = s0_str_re_re_re_re_re_re_re.substr(0, s0_str_re_re_re_re_re_re_re.size()-1);
    std::string s1_str_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_re_
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
