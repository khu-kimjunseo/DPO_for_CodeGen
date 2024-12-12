### Python version

def vowels_count(s: str) -> int:
    vowels = "aeiouAEIOU"
    n_vowels = sum(c in vowels for c in s)
    if s[-1] == 'y' or s[-1] == 'Y':
        n_vowels += 1
    return n_vowels

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long vowels_count(std::string s) {
    std::string vowels = "aeiouAEIOU";
    long n_vowels = std::count_if(s.begin(), s.end(), [&](char c){return vowels.find(c) != std::string::npos;});
    if (s.back() == 'y' || s.back() == 'Y') {
        n_vowels += 1;
    }
    return n_vowels;
}

