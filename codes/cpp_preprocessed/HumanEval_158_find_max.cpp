#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string find_max(std::vector<std::string> words) {
    std::sort(words.begin(), words.end(), [](std::string a, std::string b) {
        return std::make_pair(-std::set<char>(a.begin(), a.end()).size(), a) < std::make_pair(-std::set<char>(b.begin(), b.end()).size(), b);
    });
    return words[0];
}
