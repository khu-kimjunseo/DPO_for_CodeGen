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
    while (std::getline(ss, word)) {
        if (word.length() > n) {
            result.push_back(word);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cassert>
#include<cstdint>
#include<iomanip>
#include<utility>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<string>
#include<bitset>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<string>
#include<bitset>
#include<bits>
#include<bitset>
#include<bitset>
#include<bits>
#include<bitset>
#include<bitset>
#include<bits>
#include<bitset>
#include<bitset>
#include<bits>
#include<bitset>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bitset>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
#include<bits>
