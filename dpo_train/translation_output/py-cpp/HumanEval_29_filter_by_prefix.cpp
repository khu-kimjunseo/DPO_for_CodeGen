#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    std::regex regex(prefix);
    std::smatch matches;
    std::regex_search(strings[0], matches, regex);
    if (matches.size() == 0) {
        return result;
    }
    std::stringstream ss;
    ss << strings[0];
    for (int i = 1; i < strings.size(); i++) {
        ss << " " << strings[i];
    }
    std::string str = ss.str();
    std::regex_replace(str, regex, result);
    return result;
}
int main() {
    auto candidate = filter_by_prefix;
    assert(candidate((std::vector<std::string>()), ("john")) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"xxx", (std::string)"asd", (std::string)"xxy", (std::string)"john doe", (std::string)"xxxAAA", (std::string)"xxx"})), ("xxx")) == (std::vector<std::string>({(std::string)"xxx", (std::string)"xxxAAA", (std::string)"xxx"})));
}
