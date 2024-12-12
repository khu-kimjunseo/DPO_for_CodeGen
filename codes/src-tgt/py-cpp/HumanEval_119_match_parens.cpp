### Python version

from typing import List

def match_parens(lst: List[str]) -> str:
    def check(s):
        val = 0
        for i in s:
            if i == '(':
                val = val + 1
            else:
                val = val - 1
            if val < 0:
                return False
        return True if val == 0 else False

    S1 = lst[0] + lst[1]
    S2 = lst[1] + lst[0]
    return 'Yes' if check(S1) or check(S2) else 'No'

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string match_parens(std::vector<std::string> lst) {
    auto check = [](std::string s) {
        int val = 0;
        for (auto i : s) {
            if (i == '(') {
                val = val + 1;
            } else {
                val = val - 1;
            }
            if (val < 0) {
                return false;
            }
        }
        return val == 0;
    };
    auto S1 = lst[0] + lst[1];
    auto S2 = lst[1] + lst[0];
    return check(S1) || check(S2) ? "Yes" : "No";
}

