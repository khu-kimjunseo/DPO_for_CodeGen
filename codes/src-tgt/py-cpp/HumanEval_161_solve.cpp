### Python version

def solve(s: str) -> str:
    flg = 0
    idx = 0
    new_str = list(s)
    for i in s:
        if i.isalpha():
            new_str[idx] = i.swapcase()
            flg = 1
        idx += 1
    s = ""
    for i in new_str:
        s += i
    if flg == 0:
        return s[len(s)::-1]
    return s

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
std::string solve(std::string s) {
    bool flg = false;
    std::string new_str = s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            new_str[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            flg = true;
        }
    }
    if (!flg) {
        std::reverse(new_str.begin(), new_str.end());
    }
    return new_str;
}

