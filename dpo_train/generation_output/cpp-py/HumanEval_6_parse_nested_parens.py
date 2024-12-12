### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> parse_nested_parens(std::string paren_string) {
    std::vector<long> res;
    std::stringstream ss(paren_string);
    std::string s;
    while (ss >> s) {
        long depth = 0, max_depth = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                max_depth = std::max(depth, max_depth);
            } else {
                depth--;
            }
        }
        res.push_back(max_depth);
    }
    return res;
}

### Python version

from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    res = []
    paren_string = paren_string.replace("(", "")
    paren_string = paren_string.replace(")", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.replace("}", "")
    paren_string = paren_string.replace("[", "")
    paren_string = paren_string.replace("]", "")
    paren_string = paren_string.replace("{", "")
    paren_string = paren_string.