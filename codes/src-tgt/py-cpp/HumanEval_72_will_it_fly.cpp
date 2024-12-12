### Python version

from typing import List

def will_it_fly(q: List[int], w: int) -> bool:
    if sum(q) > w:
        return False

    i, j = 0, len(q)-1
    while i<j:
        if q[i] != q[j]:
            return False
        i+=1
        j-=1
    return True

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool will_it_fly(std::vector<long> q, long w) {
    if (std::accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    int i=0, j=q.size()-1;
    while (i<j) {
        if (q[i] != q[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

