#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long largest_divisor(long n) {
    long ret = 1;
    while (n > 0) {
        if (n % 2 == 0) {
            ret *= 2;
        }
        n /= 2;
    }
    return ret;
}
int main() {
    auto candidate = largest_divisor;
    assert(candidate((3)) == (1));
    assert(candidate((7)) == (1));
    assert(candidate((10)) == (5));
    assert(candidate((100)) == (50));
    assert(candidate((49)) == (7));
}
