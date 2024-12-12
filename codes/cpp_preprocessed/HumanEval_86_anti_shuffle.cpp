#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string anti_shuffle(std::string s) {
    std::stringstream ss(s);
    std::string word, res;
    while (ss >> word) {
        std::sort(word.begin(), word.end());
        res += word + " ";
    }
    res.pop_back();
    return res;
}
