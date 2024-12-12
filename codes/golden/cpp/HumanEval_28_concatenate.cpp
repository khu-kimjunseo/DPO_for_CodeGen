#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string concatenate(std::vector<std::string> strings) {
    return std::accumulate(strings.begin(), strings.end(), std::string(""));
}
int main() {
    auto candidate = concatenate;
    assert(candidate((std::vector<std::string>())) == (""));
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z"}))) == ("xyz"));
    assert(candidate((std::vector<std::string>({(std::string)"x", (std::string)"y", (std::string)"z", (std::string)"w", (std::string)"k"}))) == ("xyzwk"));
}
