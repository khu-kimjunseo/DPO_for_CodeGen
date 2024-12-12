### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string change_base(long x, long base) {
    std::string ret;
    while (x > 0) {
        ret = std::to_string(x % base) + ret;
        x /= base;
    }
    return ret;
}


### Python version

def change_base(x: int, base: int) -> str:
    ret = ""
    while x > 0:
        ret = str(x % base) + ret
        x //= base
    return ret
