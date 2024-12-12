### Python version

from typing import List

def median(l: List[int]) -> float:
    l = sorted(l)
    if len(l) % 2 == 1:
        return l[len(l) // 2]
    else:
        return (l[len(l) // 2 - 1] + l[len(l) // 2]) / 2.0

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float median(std::vector<long> l) {
    std::sort(l.begin(), l.end());
    if (l.size() % 2 == 1) {
        return l[l.size() / 2];
    } else {
        return (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2.0;
    }
}

