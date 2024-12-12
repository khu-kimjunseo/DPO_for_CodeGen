### Python version

from typing import List

def exchange(lst1: List[int], lst2: List[int]) -> str:
    odd = 0
    even = 0
    for i in lst1:
        if i%2 == 1:
            odd += 1
    for i in lst2:
        if i%2 == 0:
            even += 1
    if even >= odd:
        return "YES"
    return "NO"

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
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    std::stringstream ss;
    ss << "YES";
    for (long i = 0; i < lst1.size(); i++) {
        if (lst1[i] == lst2[i]) {
            ss << "YES";
        } else {
            ss << "NO";
        }
    }
    return ss.str();
}

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
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