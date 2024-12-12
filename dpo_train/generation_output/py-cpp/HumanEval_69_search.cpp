### Python version

from typing import List

def search(lst: List[int]) -> int:
    frq = [0] * (max(lst) + 1)
    for i in lst:
        frq[i] += 1;

    ans = -1
    for i in range(1, len(frq)):
        if frq[i] >= i:
            ans = i
    
    return ans

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
long search(std::vector<long> lst) {
    long ans = 0;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator end = lst.end();
    while (it != end) {
        ans += *it;
        ++it;
    }
    return ans;
}

int main() {
    std::vector<long> lst;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator end = lst.end();
    while (it != end) {
        lst.push_back(*it);
        ++it;
    }
    std::cout << search(lst) << std::endl;
    return 0;
}
