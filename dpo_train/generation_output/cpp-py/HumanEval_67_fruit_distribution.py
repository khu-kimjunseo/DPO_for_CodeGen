### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fruit_distribution(std::string s, long n) {
    std::vector<int> lis;
    std::stringstream ss(s);
    std::string word;
    while(ss >> word) {
        if(std::regex_match(word, std::regex("\\d+"))) {
            lis.push_back(std::stoi(word));
        }
    }
    return n - std::accumulate(lis.begin(), lis.end(), 0);
}

### Python version

def fruit_distribution(s: str, n: int) -> int:
    return fruit_distribution(s, n)

### C++ version

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<regex>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set