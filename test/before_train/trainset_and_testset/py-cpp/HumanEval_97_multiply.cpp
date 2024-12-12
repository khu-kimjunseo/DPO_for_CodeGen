#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long multiply(long a, long b) {
    long result = 0;
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a < 0) {
        result = -result;
        a = -a;
    }
    if (b < 0) {
        result = -result;
        b = -b;
    }
    result = a * b;
    return result;
}
int main() {
    auto candidate = multiply;
    assert(candidate((148), (412)) == (16));
    assert(candidate((19), (28)) == (72));
    assert(candidate((2020), (1851)) == (0));
    assert(candidate((14), (-15)) == (20));
    assert(candidate((76), (67)) == (42));
    assert(candidate((17), (27)) == (49));
    assert(candidate((0), (1)) == (0));
    assert(candidate((0), (0)) == (0));
}
