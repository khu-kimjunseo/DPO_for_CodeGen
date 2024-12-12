### Python version

from typing import List

def sum_squares(lst: List[float]) -> int:
    import math
    squared = 0
    for i in lst:
        squared += math.ceil(i)**2
    return squared

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long sum_squares(std::vector<float> lst) {
    long squared = 0;
    for (auto i : lst) {
        squared += std::ceil(i) * std::ceil(i);
    }
    return squared;
}

