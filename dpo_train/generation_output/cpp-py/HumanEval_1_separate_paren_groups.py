### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_string;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            current_string.push_back(c);
        } else if (c == ')') {
            current_depth--;
            current_string.push_back(c);
            if (current_depth == 0) {
                result.push_back(current_string);
                current_string.clear();
            }
        }
    }
    return result;
}

### Python version

from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### C++ version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### C++ version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### C++ version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### C++ version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups = separate_paren_groups(paren_string)
    for group in paren_groups:
        result.append(group)
    return result

### Python version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_groups =