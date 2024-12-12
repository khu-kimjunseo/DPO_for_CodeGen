### Python version

def circular_shift(x: int, shift: int) -> str:
    s = str(x)
    if shift > len(s):
        return s[::-1]
    else:
        return s[len(s) - shift:] + s[:len(s) - shift]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string circular_shift(long x, long shift) {
    std::string s = std::to_string(x);
    if (shift > s.size()) {
        return std::string(s.rbegin(), s.rend());
    } else {
        return s.substr(s.size() - shift) + s.substr(0, s.size() - shift);
    }
}

