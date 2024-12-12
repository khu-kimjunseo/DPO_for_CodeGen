### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::optional<long> next_smallest(std::vector<long> lst) {
    std::sort(lst.begin(), lst.end());
    lst.erase(std::unique(lst.begin(), lst.end()), lst.end());
    return lst.size() < 2 ? std::nullopt : std::make_optional(lst[1]);
}


### Python version

from typing import List
from typing import Optional

def next_smallest(lst: List[int]) -> Optional[int]:
    lst = sorted(set(lst))
    return None if len(lst) < 2 else lst[1]
