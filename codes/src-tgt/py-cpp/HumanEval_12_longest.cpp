### Python version

from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None

    maxlen = max(len(x) for x in strings)
    for s in strings:
        if len(s) == maxlen:
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
std::optional<std::string> longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return std::nullopt;
    }
    auto it = std::max_element(strings.begin(), strings.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return *it;
}

