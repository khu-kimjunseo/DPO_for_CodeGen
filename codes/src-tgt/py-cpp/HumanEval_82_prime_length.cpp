### Python version

def prime_length(string: str) -> bool:
    l = len(string)
    if l == 0 or l == 1:
        return False
    for i in range(2, l):
        if l % i == 0:
            return False
    return True

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool prime_length(std::string string) {
    int l = string.size();
    if (l == 0 || l == 1) {
        return false;
    }
    for (int i = 2; i < l; i++) {
        if (l % i == 0) {
            return false;
        }
    }
    return true;
}

