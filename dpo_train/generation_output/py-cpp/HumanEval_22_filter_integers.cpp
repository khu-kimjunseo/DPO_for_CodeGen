### Python version

from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

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
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> result;
    std::unordered_map<long, std::vector<long> > map;
    std::unordered_set<long> set;
    std::unordered_map<long, std::vector<long> > map2;
    std::unordered_set<long> set2;
    std::stringstream ss;
    std::regex rx;
    std::regex_match(values[0].c_str(), rx, map);
    for (auto x : map) {
        result.push_back(x.first);
    }
    for (auto x : map2) {
        result.push_back(x.first);
    }
    for (auto x : set) {
        result.push_back(x);
    }
    for (auto x : set2) {
        result.push_back(x);
    }
    return result;
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
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<numeric>
#include<utility>
#include<functional>
#include<functional>
#include<functional>
#include<bitset>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include<map>
#include