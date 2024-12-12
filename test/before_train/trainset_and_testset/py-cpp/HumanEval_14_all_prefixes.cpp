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
    std::regex rx("[a-zA-Z]");
    std::smatch what;
    std::regex_search(string, what, rx);
    if (what.size() == 0) {
        return result;
    }
    std::string prefix = what.str(0);
    std::string::size_type pos = prefix.find_first_of('a');
    while (pos != std::string::npos) {
        result.push_back(prefix.substr(0, pos));
        prefix = prefix.substr(pos+1);
        pos = prefix.find_first_of('a');
    }
    result.push_back(prefix);
    return result;
}
int main() {
    auto candidate = all_prefixes;
    assert(candidate(("")) == (std::vector<std::string>()));
    assert(candidate(("asdfgh")) == (std::vector<std::string>({(std::string)"a", (std::string)"as", (std::string)"asd", (std::string)"asdf", (std::string)"asdfg", (std::string)"asdfgh"})));
    assert(candidate(("WWW")) == (std::vector<std::string>({(std::string)"W", (std::string)"WW", (std::string)"WWW"})));
}
