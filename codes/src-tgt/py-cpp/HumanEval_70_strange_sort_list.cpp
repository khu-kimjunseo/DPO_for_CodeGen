### Python version

from typing import List

def strange_sort_list(lst: List[int]) -> List[int]:
    res, switch = [], True
    while lst:
        res.append(min(lst) if switch else max(lst))
        lst.remove(res[-1])
        switch = not switch
    return res

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    bool switch_ = true;
    while (lst.size()) {
        res.push_back(switch_ ? *std::min_element(lst.begin(), lst.end()) : *std::max_element(lst.begin(), lst.end()));
        lst.erase(std::find(lst.begin(), lst.end(), res.back()));
        switch_ = !switch_;
    }
    return res;
}

