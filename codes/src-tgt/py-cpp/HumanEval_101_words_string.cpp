### Python version

from typing import List

def words_string(s: str) -> List[str]:
    if not s:
        return []

    s_list = []

    for letter in s:
        if letter == ',':
            s_list.append(' ')
        else:
            s_list.append(letter)

    s_list = "".join(s_list)
    return s_list.split()

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

