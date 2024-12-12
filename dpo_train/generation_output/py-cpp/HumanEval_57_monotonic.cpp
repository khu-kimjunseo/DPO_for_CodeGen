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
    std::unordered_map<long, int> m;
    std::unordered_set<long> s;
    std::vector<long>::iterator it = l.begin();
    while (it != l.end()) {
        if (m.find(*it) == m.end()) {
            m[*it] = 1;
            s.insert(*it);
        } else {
            m[*it] = m[*it] + 1;
            s.insert(*it);
        }
        it++;
    }
    return monotonic(s);
}

int main() {
    std::vector<long> l;
    std::vector<long>::iterator it = l.begin();
    while (it != l.end()) {
        if (monotonic(l)) {
            std::cout << *it << std::endl;
        }
        it++;
    }
    return 0;
}
