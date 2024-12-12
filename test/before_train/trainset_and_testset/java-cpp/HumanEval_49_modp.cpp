#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long modp(long n, long p) {
    long ret = 1;
    for (int i = 0; i < n; i++) {
        ret = (2 * ret) % p;
    }
    return ret;
}
int main() {
    auto candidate = modp;
    assert(candidate((3), (5)) == (3));
    assert(candidate((1101), (101)) == (2));
    assert(candidate((0), (101)) == (1));
    assert(candidate((3), (11)) == (8));
    assert(candidate((100), (101)) == (1));
    assert(candidate((30), (5)) == (4));
    assert(candidate((31), (5)) == (3));
}
