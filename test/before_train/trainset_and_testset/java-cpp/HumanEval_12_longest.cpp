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
    std::string longest = strings.back();
    for (std::string s : strings) {
        if (s.length() > longest.length()) {
            longest = s;
        }
    }
    return longest;
}
int main() {
    auto candidate = longest;
    assert(candidate((std::vector<std::string>())) == std::nullopt);
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z"}))) == "x");
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"yyy", (std::string)"zzzz", (std::string)"www", (std::string)"kkkk", (std::string)"abc"}))) == "zzzz");
}
