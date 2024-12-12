#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict;
    std::stringstream ss;
    ss << test;
    std::string test2 = ss.str();
    std::regex rx("[0-9]+");
    std::smatch m;
    std::regex_search(test2, m, rx);
    for(int i=0;i<m.size();i++) {
        std::stringstream ss;
        ss << m[i].str();
        std::string test3 = ss.str();
        std::regex rx("[0-9]+");
        std::smatch m2;
        std::regex_search(test3, m2, rx);
        long val = m2.size();
        dict[m2.str()] = val;
    }
    return dict;
}
int main() {
    auto candidate = histogram;
    assert(candidate(("a b b a")) == (std::map<std::string,long>({{"a", 2}, {"b", 2}})));
    assert(candidate(("a b c a b")) == (std::map<std::string,long>({{"a", 2}, {"b", 2}})));
    assert(candidate(("a b c d g")) == (std::map<std::string,long>({{"a", 1}, {"b", 1}, {"c", 1}, {"d", 1}, {"g", 1}})));
    assert(candidate(("r t g")) == (std::map<std::string,long>({{"r", 1}, {"t", 1}, {"g", 1}})));
    assert(candidate(("b b b b a")) == (std::map<std::string,long>({{"b", 4}})));
    assert(candidate(("r t g")) == (std::map<std::string,long>({{"r", 1}, {"t", 1}, {"g", 1}})));
    assert(candidate(("")) == (std::map<std::string,long>()));
    assert(candidate(("a")) == (std::map<std::string,long>({{"a", 1}})));
}
