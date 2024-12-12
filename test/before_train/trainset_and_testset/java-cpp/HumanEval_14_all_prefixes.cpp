#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    std::stringstream ss(string);
    std::string word;
    while (std::getline(ss, word, ' ')) {
        result.push_back(word);
    }
    return result;
}
int main() {
    auto candidate = all_prefixes;
    assert(candidate(("")) == (std::vector<std::string>()));
    assert(candidate(("asdfgh")) == (std::vector<std::string>({(std::string)"a", (std::string)"as", (std::string)"asd", (std::string)"asdf", (std::string)"asdfg", (std::string)"asdfgh"})));
    assert(candidate(("WWW")) == (std::vector<std::string>({(std::string)"W", (std::string)"WW", (std::string)"WWW"})));
}
