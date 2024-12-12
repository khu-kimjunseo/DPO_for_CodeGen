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
#include<unordered_map>
#include<unordered_set>
long max_element(std::vector<long> l) {
    long m = 0;
    for (auto i : l) {
        m = max(m, i);
    }
    return m;
}

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cstdio>
#include<cassert>
#include<cctype>
#include<cstring>
#include<climits>
#include<cstdint>
#include<cctype>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#