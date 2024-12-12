#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string word;
    while (std::getline(ss, word, ',')) {
        v.push_back(word);
    }
    return v;
}
int main() {
    auto candidate = words_string;
    assert(candidate(("Hi, my name is John")) == (std::vector<std::string>({(std::string)"Hi", (std::string)"my", (std::string)"name", (std::string)"is", (std::string)"John"})));
    assert(candidate(("One, two, three, four, five, six")) == (std::vector<std::string>({(std::string)"One", (std::string)"two", (std::string)"three", (std::string)"four", (std::string)"five", (std::string)"six"})));
    assert(candidate(("Hi, my name")) == (std::vector<std::string>({(std::string)"Hi", (std::string)"my", (std::string)"name"})));
    assert(candidate(("One,, two, three, four, five, six,")) == (std::vector<std::string>({(std::string)"One", (std::string)"two", (std::string)"three", (std::string)"four", (std::string)"five", (std::string)"six"})));
    assert(candidate(("")) == (std::vector<std::string>()));
    assert(candidate(("ahmed     , gamal")) == (std::vector<std::string>({(std::string)"ahmed", (std::string)"gamal"})));
}
