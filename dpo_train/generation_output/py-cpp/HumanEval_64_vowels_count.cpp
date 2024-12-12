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
#include<unordered_map>
#include<unordered_set>
long vowels_count(std::string s) {
    std::regex vowels("[aeiouAEIOU]");
    std::smatch m;
    std::regex_search(s, m, vowels);
    return m.size();
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << vowels_count(s) << std::endl;
    return 0;
}
