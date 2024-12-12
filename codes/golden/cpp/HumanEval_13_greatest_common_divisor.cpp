#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long greatest_common_divisor(long a, long b) {
    while (b) {
        long temp = a % b; a = b; b = temp;
    }
    return a;
}
int main() {
    auto candidate = greatest_common_divisor;
    assert(candidate((3), (7)) == (1));
    assert(candidate((10), (15)) == (5));
    assert(candidate((49), (14)) == (7));
    assert(candidate((144), (60)) == (12));
}
