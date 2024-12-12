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
