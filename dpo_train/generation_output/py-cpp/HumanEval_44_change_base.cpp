### Python version

def change_base(x: int, base: int) -> str:
    ret = ""
    while x > 0:
        ret = str(x % base) + ret
        x //= base
    return ret

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
std::string change_base(long x, long base) {
    std::stringstream ret;
    ret << x;
    ret << change_base(x / base, base);
    return ret.str();
}

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<iterator>
#include<iterator>
#include<stack>
#include<queue>
#include<stack>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>
#include<queue>