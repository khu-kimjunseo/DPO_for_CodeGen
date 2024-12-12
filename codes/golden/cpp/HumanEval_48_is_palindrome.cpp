#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_palindrome(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != text[text.size() - 1 - i]) {
            return false;
        }
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
