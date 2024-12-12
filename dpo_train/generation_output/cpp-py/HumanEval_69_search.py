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
    return search(lst[0])

### C++ version

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<ctime>
#include<cstdint>
#include<cctype>
#include<cassert>
#include<cstdint>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>