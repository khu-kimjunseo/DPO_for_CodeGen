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

### Python version

def circular_shift(x: int, shift: int) -> str:
    return circular_shift(x, shift) + str(x)

### C++ version

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<regex>
#include<map>
#include<set>

int main() {
    std::string s = "abcdefghijklmnopqrstuvwxyz";
    std::vector<std::string> v = {s};
    std::stringstream ss;
    ss << circular_shift(v.size(), 1);
    std::string s2 = ss.str();
    std::cout << s2 << std::endl;
    return 0;
}
