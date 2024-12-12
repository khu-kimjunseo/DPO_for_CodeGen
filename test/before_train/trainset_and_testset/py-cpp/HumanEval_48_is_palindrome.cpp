#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_palindrome(std::string text) {
    std::stringstream ss(text);
    std::string s;
    std::getline(ss, s, '*');
    std::regex r("^[a-zA-Z0-9]*$");
    std::smatch m;
    if (std::regex_search(s, m, r)) {
        return m[0].matched;
    }
    return false;
}
int main() {
    auto candidate = is_palindrome;
    assert(candidate(("")) == (true));
    assert(candidate(("aba")) == (true));
    assert(candidate(("aaaaa")) == (true));
    assert(candidate(("zbcd")) == (false));
    assert(candidate(("xywyx")) == (true));
    assert(candidate(("xywyz")) == (false));
    assert(candidate(("xywzx")) == (false));
}
