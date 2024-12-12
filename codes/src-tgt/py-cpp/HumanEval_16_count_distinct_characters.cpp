### Python version

def count_distinct_characters(string: str) -> int:
    return len(set(string.lower()))

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_distinct_characters(std::string string) {
    std::set<char> s;
    for (auto c : string) {
        s.insert(tolower(c));
    }
    return s.size();
}

