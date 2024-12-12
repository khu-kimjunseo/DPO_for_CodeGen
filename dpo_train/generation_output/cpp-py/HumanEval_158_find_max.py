### C++ version

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

### Python version

from typing import List

def find_max(words: List[str]) -> str:
    return find_max(words)

### C++ version

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<regex>
#include<sstream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#