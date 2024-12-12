### Python version

from typing import List
from typing import Tuple
from typing import Optional
def largest_smallest_integers(lst: List[int]) -> Tuple[Optional[int], Optional[int]]:
    smallest = list(filter(lambda x: x < 0, lst))
    largest = list(filter(lambda x: x > 0, lst))
    return (max(smallest) if smallest else None, min(largest) if largest else None)

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
std::tuple<std::optional<long>, std::optional<long>> largest_smallest_integers(std::vector<long> lst) {
    std::optional<long> smallest = std::numeric_limits<long>::max();
    std::optional<long> largest = std::numeric_limits<long>::min();
    for (long i = 0; i < lst.size(); ++i) {
        if (lst[i] < smallest) smallest = lst[i];
        if (lst[i] > largest) largest = lst[i];
    }
    return std::make_tuple(smallest, largest);
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
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<numeric>
#include<initializer_list>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<unordered_pair>
#include<unordered_pair>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset