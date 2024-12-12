#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> res;
    for (auto x: strings) {
        if (x.find(prefix) == 0) {
            res.push_back(x);
        }
    }
    return res;
}
int main() {
    auto candidate = filter_by_prefix;
    assert(candidate((std::vector<std::string>()), ("john")) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"xxx", (std::string)"asd", (std::string)"xxy", (std::string)"john doe", (std::string)"xxxAAA", (std::string)"xxx"})), ("xxx")) == (std::vector<std::string>({(std::string)"xxx", (std::string)"xxxAAA", (std::string)"xxx"})));
}
