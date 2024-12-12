#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::optional<std::string> longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return std::nullopt;
    }
    auto it = std::max_element(strings.begin(), strings.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return *it;
}
int main() {
    auto candidate = longest;
    assert(candidate((std::vector<std::string>())) == std::nullopt);
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z"}))) == "x");
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"yyy", (std::string)"zzzz", (std::string)"www", (std::string)"kkkk", (std::string)"abc"}))) == "zzzz");
}
