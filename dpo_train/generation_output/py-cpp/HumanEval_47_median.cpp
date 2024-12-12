### Python version

from typing import List

def median(l: List[int]) -> float:
    l = sorted(l)
    if len(l) % 2 == 1:
        return l[len(l) // 2]
    else:
        return (l[len(l) // 2 - 1] + l[len(l) // 2]) / 2.0

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
float median(std::vector<long> l) {
    std::sort(l.begin(), l.end());
    return l[(l.size() - 1) / 2];
}

int main() {
    std::vector<long> l;
    std::cin >> l;
    std::cout << median(l) << std::endl;
    return 0;
}
