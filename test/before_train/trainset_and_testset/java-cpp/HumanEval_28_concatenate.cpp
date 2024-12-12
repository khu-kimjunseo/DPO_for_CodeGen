#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for(std::string s : strings) {
        result += s;
    }
    return result;
}
int main() {
    auto candidate = concatenate;
    assert(candidate((std::vector<std::string>())) == (""));
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z"}))) == ("xyz"));
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z", (std::string)"w", (std::string)"k"}))) == ("xyzwk"));
}
