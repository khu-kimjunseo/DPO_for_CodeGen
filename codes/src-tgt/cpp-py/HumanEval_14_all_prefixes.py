### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    for(int i=0;i<string.length();i++) {
        result.push_back(string.substr(0,i+1));
    }
    return result;
}


### Python version

from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []

    for i in range(len(string)):
        result.append(string[:i+1])
    return result
