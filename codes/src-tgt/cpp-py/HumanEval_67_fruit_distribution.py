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
    lis = list()
    for i in s.split(' '):
        if i.isdigit():
            lis.append(int(i))
    return n - sum(lis)
