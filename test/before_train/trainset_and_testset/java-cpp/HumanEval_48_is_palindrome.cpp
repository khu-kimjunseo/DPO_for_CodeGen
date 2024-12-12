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
    std::string::iterator it = text.begin();
    std::string::iterator end = text.end();
    while (it != end) {
        if (*it != *(it + 1)) {
            return false;
        }
        ++it;
    }
    return true;
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
