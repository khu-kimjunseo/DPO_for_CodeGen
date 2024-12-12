#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long prime_fib(long n) {
    if (n == 0) {
        return 0;
    }
    long p = 1;
    while (p < n) {
        p *= 2;
    }
    return p;
}
int main() {
    auto candidate = prime_fib;
    assert(candidate((1)) == (2));
    assert(candidate((2)) == (3));
    assert(candidate((3)) == (5));
    assert(candidate((4)) == (13));
    assert(candidate((5)) == (89));
    assert(candidate((6)) == (233));
    assert(candidate((7)) == (1597));
    assert(candidate((8)) == (28657));
    assert(candidate((9)) == (514229));
    assert(candidate((10)) == (433494437));
}
