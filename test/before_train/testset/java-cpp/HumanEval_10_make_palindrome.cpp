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
    std::string result = "";
    std::string::iterator it = string.begin();
    std::string::iterator it_end = string.end();
    while (it != it_end) {
        if (*it == '*') {
            result += "*";
            it++;
        } else {
            result += *it;
            it++;
        }
    }
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
