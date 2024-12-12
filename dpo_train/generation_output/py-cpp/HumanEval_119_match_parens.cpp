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
#include<unordered_map>
#include<unordered_set>
std::string match_parens(std::vector<std::string> lst) {
    std::stringstream ss;
    std::string s;
    ss << lst[0];
    s = ss.str();
    ss.str("");
    ss << lst[1];
    s = ss.str();
    return s;
}

std::string match_parens(std::string s) {
    std::stringstream ss;
    std::string s1;
    std::string s2;
    ss << s;
    s1 = ss.str();
    ss.str("");
    ss << s;
    s2 = ss.str();
    return s1 + s2;
}

std::string match_parens(std::string s, std::string p) {
    std::stringstream ss;
    std::string s1;
    std::string s2;
    ss << s;
    s1 = ss.str();
    ss.str("");
    ss << p;
    s2 = ss.str();
    return s1 + s2;
}

std::string match_parens(std::string s, std::string p, std::string r) {
    std::stringstream ss;
    std::string s1;
    std::string s2;
    ss << s;
    s1 = ss.str();
    ss.str("");
    ss << p;
    s2 = ss.str();
    ss << r;
    return s1 + s2;
}

std::string match_parens(std::string s, std::string p, std::string r, std::string s1) {
    std::stringstream ss;
    std::string s2;
    ss << s;
    s2 = ss.str();
    ss << p;
    s1 = ss.str();
    ss << r;
    return s1 + s2;
}

std::string match_parens(std::string s, std::string p, std::string r, std::string s1, std::string s2) {
    std::stringstream ss;
    std::string s3;
    ss << s;
    s3 = ss.str();
    ss << p;
    s1 = ss.str();
    ss << r;
    s2 = ss.str();
    ss << s1;
    s3 = ss.str();
    return s3;
}

std::string match_parens(std::string s, std::string p, std::string r, std::string s1, std::string s2, std::string s3) {
    std::stringstream ss;
    std::string s4;
    ss << s;
    s4 = ss.str();
    ss << p;
    s1 = ss.str();
    ss << r;
    s2 = ss.str();
    ss << s1;
    s3 = ss.str();
    ss << s2;
    s4 = ss.str();
    return s4;
}

std::string match_parens(std::string s, std::string p, std::string r, std::string s1, std::string s2, std::string s3, std::string s4) {
    std::stringstream ss;
    std::string s5;
    ss