### C++ version

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

### Python version

def anti_shuffle(s: str) -> str:
    return anti_shuffle(s.lower())

### C++ version

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<sstream>
#include<regex>
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
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#