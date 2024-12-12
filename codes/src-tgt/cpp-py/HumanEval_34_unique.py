### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique(std::vector<long> l) {
    std::sort(l.begin(), l.end()); l.erase(std::unique(l.begin(), l.end()), l.end()); return l;
}


### Python version

from typing import List

def unique(l: List[int]) -> List[int]:
    return sorted(list(set(l)))
