### Python version

from typing import List

def unique(l: List[int]) -> List[int]:
    return sorted(list(set(l)))

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
std::vector<long> unique(std::vector<long> l) {
    std::vector<long> res;
    std::unordered_set<long> set;
    std::unordered_map<long, long> map;
    for (long i = 0; i < l.size(); i++) {
        if (set.count(l[i]) == 0) {
            set.insert(l[i]);
            map[l[i]] = i;
            res.push_back(l[i]);
        }
    }
    return res;
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
#include<un