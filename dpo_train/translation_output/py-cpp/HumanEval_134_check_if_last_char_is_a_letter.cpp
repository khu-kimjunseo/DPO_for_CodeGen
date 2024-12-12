#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::regex rx("[a-zA-Z]");
    std::smatch what;
    std::stringstream ss;
    ss << txt;
    std::string s = ss.str();
    std::smatch what2;
    std::regex_search(s, what2, rx);
    return what2.size() == 1;
}
int main() {
    auto candidate = check_if_last_char_is_a_letter;
    assert(candidate(("apple")) == (false));
    assert(candidate(("apple pi e")) == (true));
    assert(candidate(("eeeee")) == (false));
    assert(candidate(("A")) == (true));
    assert(candidate(("Pumpkin pie ")) == (false));
    assert(candidate(("Pumpkin pie 1")) == (false));
    assert(candidate(("")) == (false));
    assert(candidate(("eeeee e ")) == (false));
    assert(candidate(("apple pie")) == (false));
    assert(candidate(("apple pi e ")) == (false));
}
