### Python version

from typing import List


def string_xor(a: str, b: str) -> str:
    def xor(i, j):
        if i == j:
            return '0'
        else:
            return '1'

    return ''.join(xor(x, y) for x, y in zip(a, b))

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
std::string string_xor(std::string a, std::string b) {
    std::stringstream ss;
    ss << a << b;
    return ss.str();
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset