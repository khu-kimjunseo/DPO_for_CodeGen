### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool correct_bracketing(std::string brackets) {
    int depth = 0;
    for (char b : brackets) {
        if (b == '(') {
            depth++;
        } else {
            depth--;
        }
        if (depth < 0) {
            return false;
        }
    }
    return depth == 0;
}

### Python version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return true;
    if not brackets.startswith("("):
        return false;
    if brackets.endswith(")"):
        return true;
    if brackets.endswith("("):
        return false;
    if brackets.endswith(")") and brackets.endswith("("):
        return true;
    return correct_bracketing(brackets.rstrip("()"))

### C++ version

#define MAX_BRACKETS_LENGTH 100

class Solution {
    public:
        bool isValid(string s) {
            if (s.size() == 0) {
                return true;
            }
            if (s.size() > MAX_BRACKETS_LENGTH) {
                return false;
            }
            int i = 0;
            int j = 0;
            int k = 0;
            int l = 0;
            int m = 0;
            int n = 0;
            int m_i = 0;
            int m_j = 0;
            int m_k = 0;
            int m_l = 0;
            int m_m = 0;
            int m_n = 0;
            int m_m_i = 0;
            int m_m_j = 0;
            int m_m_k = 0;
            int m_m_l = 0;
            int m_m_m = 0;
            int m_m_n = 0;
            int m_m_m_i = 0;
            int m_m_m_j = 0;
            int m_m_m_k = 0;
            int m_m_m_l = 0;
            int m_m_m_m = 0;
            int m_m_m_n = 0;
            int m_m_m_m_i = 0;
            int m_m_m_m_j = 0;
            int m_m_m_m_k = 0;
            int m_m_m_m_l = 0;
            int m_m_m_m_m = 0;
            int m_m_m_m_n = 0;
            int m_m_m_m_m_i = 0;
            int m_m_m_m_m_j = 0;
            int m_m_m_m_m_k = 0;
            int m_m_m_m_m_l = 0;
            int m_m_m_m_m_m = 0;
            int m_m_m_m_m_n = 0;
            int m_m_m_m_m_m_i = 0;
            int m_m_m_m_m_m_j = 0;
            int m_m_m_m_m_m_k = 0;
            int m_m_m_m_m_m_l = 0;
            int m_m_m_m_m_m_m_i = 0;
            int m_m_m_m_m_m_m_j = 0;
            int m_m_m_m_m_m_m_k = 0;
            int m_m_m_m_m_m_m_l = 0;
            int m_m_m_m_m_m_m_m_m_i = 0;
            int m_m_m_m_m_m_m_m_m_j = 0;
            int m_m_m_m_m_m_m_m_k = 0;
            int m_m