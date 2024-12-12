### Python version

from typing import List

def sort_third(l: List[int]) -> List[int]:
    l = list(l)
    l[::3] = sorted(l[::3])
    return l

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
std::vector<long> sort_third(std::vector<long> l) {
    std::vector<long> r;
    std::sort(l.begin(), l.end());
    for (long i = 0; i < l.size(); i++) {
        r.push_back(l[i]);
    }
    return r;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
#include<bitset>
#include<utility>
