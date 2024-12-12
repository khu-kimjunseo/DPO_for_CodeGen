### Python version

from typing import List

def total_match(lst1: List[str], lst2: List[str]) -> List[str]:
    l1 = 0
    for st in lst1:
        l1 += len(st)
    
    l2 = 0
    for st in lst2:
        l2 += len(st)
    
    if l1 <= l2:
        return lst1
    else:
        return lst2

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int l1 = 0;
    for (auto st : lst1) {
        l1 += st.size();
    }
    int l2 = 0;
    for (auto st : lst2) {
        l2 += st.size();
    }
    if (l1 <= l2) {
        return lst1;
    } else {
        return lst2;
    }
}

