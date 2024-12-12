### Python version

def strlen(string: str) -> int:
    return len(string)

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
long string_length(std::string string) {
    int len = 0;
    for (auto c : string) {
        len += 1;
    }
    return len;
}

std::string get_string(std::string string) {
    std::stringstream ss;
    ss << string;
    return ss.str();
}

std::string get_string(std::string string, int start, int end) {
    std::stringstream ss;
    ss << string;
    ss.seekg(start);
    ss.seekg(end);
    return ss.str();
}

std::string get_string(std::string string, int start, int end, int step) {
    std::stringstream ss;
    ss << string;
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss.seekg(start);
    ss.seekg(end);
    ss