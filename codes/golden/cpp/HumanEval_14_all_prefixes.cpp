#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    for(int i=0;i<string.length();i++) {
        result.push_back(string.substr(0,i+1));
    }
    return result;
}
int main() {
    auto candidate = all_prefixes;
    assert(candidate(("")) == (std::vector<std::string>()));
    assert(candidate(("asdfgh")) == (std::vector<std::string>({(std::string)"a", (std::string)"as", (std::string)"asd", (std::string)"asdf", (std::string)"asdfg", (std::string)"asdfgh"})));
    assert(candidate(("WWW")) == (std::vector<std::string>({(std::string)"W", (std::string)"WW", (std::string)"WWW"})));
}
