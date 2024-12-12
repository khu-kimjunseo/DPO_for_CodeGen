### Python version

from typing import List

def max_element(l: List[int]) -> int:
    m = l[0]
    for e in l:
        if e > m:
            m = e
    return m

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long max_element(std::vector<long> l) {
    long m = l[0];
    for (long e: l) {
        if (e > m) {
            m = e;
        }
    }
    return m;
}

