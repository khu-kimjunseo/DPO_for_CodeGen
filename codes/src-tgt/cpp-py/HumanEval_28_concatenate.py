### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string concatenate(std::vector<std::string> strings) {
    return std::accumulate(strings.begin(), strings.end(), std::string(""));
}


### Python version

from typing import List


def concatenate(strings: List[str]) -> str:
    return ''.join(strings)
