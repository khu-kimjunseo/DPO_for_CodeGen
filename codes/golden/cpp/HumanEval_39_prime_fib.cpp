#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long prime_fib(long n) {
    auto is_prime = [](long p) {
        if (p < 2) {
            return false;
        }
        for (long k = 2; k < std::min((long)std::sqrt(p) + 1, p - 1); ++k) {
            if (p % k == 0) {
                return false;
            }
        }
        return true;
    };
    std::vector<long> f = {0, 1};
    while (true) {
        f.push_back(f.back() + f[f.size() - 2]);
        if (is_prime(f.back())) {
            n -= 1;
        }
        if (n == 0) {
            return f.back();
        }
    }
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
