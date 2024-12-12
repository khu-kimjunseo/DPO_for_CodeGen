#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string get_closest_vowel(std::string word) {
    std::stringstream ss;
    ss << word;
    std::string word_closest = ss.str();
    return word_closest;
}
int main() {
    auto candidate = get_closest_vowel;
    assert(candidate(("yogurt")) == ("u"));
    assert(candidate(("full")) == ("u"));
    assert(candidate(("easy")) == (""));
    assert(candidate(("eAsy")) == (""));
    assert(candidate(("ali")) == (""));
    assert(candidate(("bad")) == ("a"));
    assert(candidate(("most")) == ("o"));
    assert(candidate(("ab")) == (""));
    assert(candidate(("ba")) == (""));
    assert(candidate(("quick")) == (""));
    assert(candidate(("anime")) == ("i"));
    assert(candidate(("Asia")) == (""));
    assert(candidate(("Above")) == ("o"));
}
