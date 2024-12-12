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
long how_many_times(std::string string, std::string substring) {
    long times = 0;
    for (int i = 0; i < string.size() - substring.size() + 1; i++) {
        if (string.substr(i, substring.size()) == substring) {
            times += 1;
        }
    }
    return times;
}

