### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_threshold(std::vector<long> l, long t) {
    for (auto e: l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
}


### Python version

from typing import List

def below_threshold(l: List[int], t: int) -> bool:
    for e in l:
        if e >= t:
            return False
    return True
