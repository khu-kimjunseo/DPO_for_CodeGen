### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_upper(std::string s) {
    long count = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (std::string("AEIOU").find(s[i]) != std::string::npos) {
            count += 1;
        }
    }
    return count;
}


### Python version

def count_upper(s: str) -> int:
    count = 0
    for i in range(0,len(s),2):
        if s[i] in "AEIOU":
            count += 1
    return count
