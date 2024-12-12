### Python version

from typing import List
from typing import Tuple

def get_row(lst: List[List[int]], x: int) -> List[Tuple[int, int]]:
    coords = [(i, j) for i in range(len(lst)) for j in range(len(lst[i])) if lst[i][j] == x]
    return sorted(sorted(coords, key=lambda x: x[1], reverse=True), key=lambda x: x[0])

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
std::vector<std::tuple<long, long>> get_row(std::vector<std::vector<long>> lst, long x) {
    std::vector<std::tuple<long, long>> coords;
    for (long i = 0; i < lst.size(); i++) {
        for (long j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                coords.push_back(std::make_tuple(i, j));
            }
        }
    }
    std::sort(coords.begin(), coords.end(), [](auto a, auto b) {
        if (std::get<0>(a) == std::get<0>(b)) {
            return std::get<1>(a) > std::get<1>(b);
        }
        return std::get<0>(a) < std::get<0>(b);
    });
    return coords;
}

