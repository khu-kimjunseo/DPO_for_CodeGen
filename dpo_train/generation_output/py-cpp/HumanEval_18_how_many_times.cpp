### Python version

def how_many_times(string: str, substring: str) -> int:
    times = 0

    for i in range(len(string) - len(substring) + 1):
        if string[i:i+len(substring)] == substring:
            times += 1

    return times

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
long how_many_times(std::string string, std::string substring) {
    long times = 0;
    std::stringstream ss(string);
    std::stringstream ss2(substring);
    std::string s;
    while (std::getline(ss, s)) {
        if (s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s.find(s