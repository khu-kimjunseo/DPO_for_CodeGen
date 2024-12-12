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
    std::map<std::string,long> dict1;
    std::stringstream ss(test);
    std::string word;
    long t = 0;
    while (ss >> word) {
        dict1[word]++;
        if (dict1[word] > t) {
            t = dict1[word];
        }
    }
    std::map<std::string,long> result;
    for (auto i : dict1) {
        if (i.second == t) {
            result[i.first] = t;
        }
    }
    return result;
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
