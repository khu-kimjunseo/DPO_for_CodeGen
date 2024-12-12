#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string make_palindrome(std::string string) {
    std::stringstream ss;
    ss << string;
    std::string result = ss.str();
    return result;
}
int main() {
    auto candidate = make_palindrome;
    assert(candidate(("")) == (""));
    assert(candidate(("x")) == ("x"));
    assert(candidate(("xyz")) == ("xyzyx"));
    assert(candidate(("xyx")) == ("xyx"));
    assert(candidate(("jerry")) == ("jerryrrej"));
}
