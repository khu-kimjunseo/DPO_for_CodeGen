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
    depth = 0
    for b in brackets:
        if b == "(":
            depth += 1
        else:
            depth -= 1
        if depth < 0:
            return False
    return depth == 0
