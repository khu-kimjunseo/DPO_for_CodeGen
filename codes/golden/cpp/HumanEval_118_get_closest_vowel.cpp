#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string get_closest_vowel(std::string word) {
    if (word.size() < 3) {
        return "";
    }

    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'O', 'U', 'I'};
    for (int i = word.size() - 2; i >= 1; i--) {
        if (vowels.count(word[i])) {
            if (!vowels.count(word[i+1]) && !vowels.count(word[i-1])) {
                return std::string(1, word[i]);
            }
        }
    }
    return "";
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
