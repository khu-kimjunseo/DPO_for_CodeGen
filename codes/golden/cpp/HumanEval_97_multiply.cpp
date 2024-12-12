#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long multiply(long a, long b) {
    return abs(a % 10) * abs(b % 10);
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
