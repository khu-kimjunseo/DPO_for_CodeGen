#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long greatest_common_divisor(long a, long b) {
    long c = 1;
    while (a) {
        c = c * a % b;
        a = a / b;
    }
    return c;
}
int main() {
    auto candidate = greatest_common_divisor;
    assert(candidate((3), (7)) == (1));
    assert(candidate((10), (15)) == (5));
    assert(candidate((49), (14)) == (7));
    assert(candidate((144), (60)) == (12));
}
