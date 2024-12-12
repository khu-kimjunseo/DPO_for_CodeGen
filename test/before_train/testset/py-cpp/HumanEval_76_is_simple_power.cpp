#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_simple_power(long x, long n) {
    if (n == 1) {
        return (x == 1);
    }
    long power = 1;
    while (power < x) {
        power = power * n;
    }
    return (power == x);
}
int main() {
    auto candidate = is_simple_power;
    assert(candidate((16), (2)) == (true));
    assert(candidate((143214), (16)) == (false));
    assert(candidate((4), (2)) == (true));
    assert(candidate((9), (3)) == (true));
    assert(candidate((16), (4)) == (true));
    assert(candidate((24), (2)) == (false));
    assert(candidate((128), (4)) == (false));
    assert(candidate((12), (6)) == (false));
    assert(candidate((1), (1)) == (true));
    assert(candidate((1), (12)) == (true));
}
