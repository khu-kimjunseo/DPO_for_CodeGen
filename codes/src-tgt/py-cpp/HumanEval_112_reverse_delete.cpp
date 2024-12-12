### Python version

from typing import Tuple

def reverse_delete(s: str,c: str) -> Tuple[str, bool]:
    s = ''.join([char for char in s if char not in c])
    return (s,s[::-1] == s)

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<std::string, bool> reverse_delete(std::string s, std::string c) {
    s.erase(std::remove_if(s.begin(), s.end(), [&c](char x) { return c.find(x) != std::string::npos; }), s.end());
    return {s, s == std::string(s.rbegin(), s.rend())};
}

