### Python version

def prime_fib(n: int) -> int:
    import math
    def is_prime(p):
        if p < 2:
            return False
        for k in range(2, min(int(math.sqrt(p)) + 1, p - 1)):
            if p % k == 0:
                return False
        return True
    f = [0, 1]
    while True:
        f.append(f[-1] + f[-2])
        if is_prime(f[-1]):
            n -= 1
        if n == 0:
            return f[-1]

### C++ version

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
