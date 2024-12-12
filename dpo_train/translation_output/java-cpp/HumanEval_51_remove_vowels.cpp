#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string remove_vowels(std::string text) {
    std::stringstream ss;
    std::regex r("[aeiou]");
    std::smatch m;
    ss << text;
    while (std::regex_search(ss.str(), m, r)) {
        ss << m.str();
    }
    return ss.str();
}
int main() {
    auto candidate = remove_vowels;
    assert(candidate(("")) == (""));
    assert(candidate(("abcdef\nghijklm")) == ("bcdf\nghjklm"));
    assert(candidate(("fedcba")) == ("fdcb"));
    assert(candidate(("eeeee")) == (""));
    assert(candidate(("acBAA")) == ("cB"));
    assert(candidate(("EcBOO")) == ("cB"));
    assert(candidate(("ybcd")) == ("ybcd"));
}
