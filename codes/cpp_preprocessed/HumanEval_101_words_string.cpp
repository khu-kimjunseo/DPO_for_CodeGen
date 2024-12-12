#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::replace(s.begin(), s.end(), ',', ' ');
    std::stringstream ss(s);
    std::string word;
    while (ss >> word) {
        result.push_back(word);
    }
    return result;
}
