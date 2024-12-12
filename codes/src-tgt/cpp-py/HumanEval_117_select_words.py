### C++ version

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


### Python version

from typing import List

def select_words(s: str, n: int) -> List[str]:
    result = []
    for word in s.split():
        n_consonants = 0
        for i in range(0, len(word)):
            if word[i].lower() not in ["a","e","i","o","u"]:
                n_consonants += 1 
        if n_consonants == n:
            result.append(word)
    return result
