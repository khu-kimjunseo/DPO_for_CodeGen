#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = filter_by_substring;
    assert(candidate((std::vector<std::string>()), ("john")) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"xxx", (std::string)"asd", (std::string)"xxy", (std::string)"john doe", (std::string)"xxxAAA", (std::string)"xxx"})), ("xxx")) == (std::vector<std::string>({(std::string)"xxx", (std::string)"xxxAAA", (std::string)"xxx"})));
    assert(candidate((std::vector<std::string>({(std::string)"xxx", (std::string)"asd", (std::string)"aaaxxy", (std::string)"john doe", (std::string)"xxxAAA", (std::string)"xxx"})), ("xx")) == (std::vector<std::string>({(std::string)"xxx", (std::string)"aaaxxy", (std::string)"xxxAAA", (std::string)"xxx"})));
    assert(candidate((std::vector<std::string>({(std::string)"grunt", (std::string)"trumpet", (std::string)"prune", (std::string)"gruesome"})), ("run")) == (std::vector<std::string>({(std::string)"grunt", (std::string)"prune"})));
}
