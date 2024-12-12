### Python version

from typing import List

def monotonic(l: List[int]) -> bool:
    if l == sorted(l) or l == sorted(l, reverse=True):
        return True
    return False

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
bool monotonic(std::vector<long> l) {
    return std::is_sorted(l.begin(), l.end()) || std::is_sorted(l.rbegin(), l.rend());
}

