#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_multiply_prime(long a) {
    auto is_prime = [&](long n) {
        for (long j = 2; j < n; j++) {
            if (n % j == 0) {
                return false;
            }
        }
        return true;
    };
    for (long i = 2; i <= 100; i++) {
        if (!is_prime(i)) continue;
        for (long j = 2; j <= 100; j++) {
            if (!is_prime(j)) continue;
            for (long k = 2; k <= 100; k++) {
                if (!is_prime(k)) continue;
                if (i * j * k == a) return true;
            }
        }
    }
    return false;
}
int main() {
    auto candidate = is_multiply_prime;
    assert(candidate((5)) == (false));
    assert(candidate((30)) == (true));
    assert(candidate((8)) == (true));
    assert(candidate((10)) == (false));
    assert(candidate((125)) == (true));
    assert(candidate((105)) == (true));
    assert(candidate((126)) == (false));
    assert(candidate((729)) == (false));
    assert(candidate((891)) == (false));
    assert(candidate((1001)) == (true));
}
