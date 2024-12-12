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
int main() {
    auto candidate = change_base;
    assert(candidate((8), (3)) == ("22"));
    assert(candidate((9), (3)) == ("100"));
    assert(candidate((234), (2)) == ("11101010"));
    assert(candidate((16), (2)) == ("10000"));
    assert(candidate((8), (2)) == ("1000"));
    assert(candidate((7), (2)) == ("111"));
    assert(candidate((2), (3)) == ("2"));
    assert(candidate((3), (4)) == ("3"));
    assert(candidate((4), (5)) == ("4"));
    assert(candidate((5), (6)) == ("5"));
    assert(candidate((6), (7)) == ("6"));
    assert(candidate((7), (8)) == ("7"));
}
