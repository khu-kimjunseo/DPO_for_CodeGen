#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> select_words(std::string s, long n) {
    std::vector<std::string> result;
    std::stringstream ss(s);
    std::string word;
    while (ss >> word) {
        long n_consonants = 0;
        for (char c : word) {
            if (std::string("aeiouAEIOU").find(c) == std::string::npos) {
                n_consonants++;
            }
        }
        if (n_consonants == n) {
            result.push_back(word);
        }
    }
    return result;
}
