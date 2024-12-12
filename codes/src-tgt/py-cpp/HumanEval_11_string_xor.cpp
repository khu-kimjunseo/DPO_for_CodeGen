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
std::string string_xor(std::string a, std::string b) {
    std::string ans;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) ans += '0';
        else ans += '1';
    }
    return ans;
}

