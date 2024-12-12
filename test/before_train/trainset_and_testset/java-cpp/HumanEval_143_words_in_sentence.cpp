#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string words_in_sentence(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    while (std::getline(ss, word)) {
        if (word.length() == 1) {
            continue;
        }
        std::vector<std::string> words = split(word);
        std::set<std::string> words_set;
        for (std::string word_ : words) {
            words_set.insert(word_);
        }
        std::set<std::string>::iterator it = words_set.begin();
        std::set<std::string>::iterator end = words_set.end();
        std::stringstream ss_;
        for (; it != end; ++it) {
            ss_ << *it;
        }
        return ss_.str();
    }
    return "";
}
int main() {
    auto candidate = words_in_sentence;
    assert(candidate(("This is a test")) == ("is"));
    assert(candidate(("lets go for swimming")) == ("go for"));
    assert(candidate(("there is no place available here")) == ("there is no place"));
    assert(candidate(("Hi I am Hussein")) == ("Hi am Hussein"));
    assert(candidate(("go for it")) == ("go for it"));
    assert(candidate(("here")) == (""));
    assert(candidate(("here is")) == ("is"));
}
