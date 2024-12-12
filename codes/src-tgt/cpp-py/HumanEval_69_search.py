### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long search(std::vector<long> lst) {
    std::vector<long> frq(*std::max_element(lst.begin(), lst.end()) + 1, 0);
    for (auto i : lst) {
        frq[i]++;
    }
    long ans = -1;
    for (int i = 1; i < frq.size(); i++) {
        if (frq[i] >= i) {
            ans = i;
        }
    }
    return ans;
}


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
