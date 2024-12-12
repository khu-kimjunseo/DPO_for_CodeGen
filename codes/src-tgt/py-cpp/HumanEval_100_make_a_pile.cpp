### Python version

from typing import List

def make_a_pile(n: int) -> List[int]:
    return [n + 2*i for i in range(n)]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> make_a_pile(long n) {
    std::vector<long> ans;
    for(long i=0;i<n;i++) {
        ans.push_back(n+2*i);
    }
    return ans;
}

