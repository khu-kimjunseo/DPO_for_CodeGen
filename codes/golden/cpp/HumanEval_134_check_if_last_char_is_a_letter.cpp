#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.find_last_of(' ') + 1);
    return (check.size() == 1 && std::isalpha(check[0]));
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
