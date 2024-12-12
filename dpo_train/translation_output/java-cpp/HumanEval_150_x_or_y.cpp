#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long x_or_y(long n, long x, long y) {
    if (n == 1) {
        return y;
    }
    long result = 0;
    for (long i = 2; i < n; i++) {
        if (n % i == 0) {
            result = result + x;
        }
    }
    return result;
}
int main() {
    auto candidate = x_or_y;
    assert(candidate((7), (34), (12)) == (34));
    assert(candidate((15), (8), (5)) == (5));
    assert(candidate((3), (33), (5212)) == (33));
    assert(candidate((1259), (3), (52)) == (3));
    assert(candidate((7919), (-1), (12)) == (-1));
    assert(candidate((3609), (1245), (583)) == (583));
    assert(candidate((91), (56), (129)) == (129));
    assert(candidate((6), (34), (1234)) == (1234));
    assert(candidate((1), (2), (0)) == (0));
    assert(candidate((2), (2), (0)) == (2));
}
