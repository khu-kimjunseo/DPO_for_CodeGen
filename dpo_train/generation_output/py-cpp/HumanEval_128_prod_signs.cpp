### Python version

from typing import List
from typing import Optional

def prod_signs(arr: List[int]) -> Optional[int]:
    if not arr: return None
    prod = 0 if 0 in arr else (-1) ** len(list(filter(lambda x: x < 0, arr)))
    return prod * sum([abs(i) for i in arr])

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
std::optional<long> prod_signs(std::vector<long> arr) {
    if(!arr) return std::nullopt;
    std::unordered_map<long, long> map;
    for(long i = 0; i < arr.size(); ++i) {
        map[arr[i]] = i;
    }
    long prod = 0;
    for(auto it = map.begin(); it != map.end(); ++it) {
        prod += it->second;
    }
    return prod;
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
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_set>
#include<unordered_map>
#include<unordered_map>
#include<unordered