### Python version

from typing import List
from typing import Optional

def next_smallest(lst: List[int]) -> Optional[int]:
    lst = sorted(set(lst))
    return None if len(lst) < 2 else lst[1]

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
std::optional<long> next_smallest(std::vector<long> lst) {
    if(lst.size() == 0) return std::nullopt;
    long min = lst[0];
    for(int i = 1; i < lst.size(); ++i) {
        if(lst[i] < min) {
            min = lst[i];
        }
    }
    return min;
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
#include<map>
#include<set>
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
#include<ut