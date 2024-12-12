### C++ version

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


### Python version

def is_multiply_prime(a: int) -> bool:
    def is_prime(n):
        for j in range(2,n):
            if n%j == 0:
                return False
        return True

    for i in range(2,101):
        if not is_prime(i): continue
        for j in range(2,101):
            if not is_prime(j): continue
            for k in range(2,101):
                if not is_prime(k): continue
                if i*j*k == a: return True
    return False
