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
    if (a == 0) return false;
    if (a == 1) return true;
    if (a % 2 == 0) return false;
    if (a % 3 == 0) return true;
    if (a % 5 == 0) return true;
    if (a % 7 == 0) return true;
    if (a % 11 == 0) return true;
    if (a % 13 == 0) return true;
    if (a % 17 == 0) return true;
    if (a % 19 == 0) return true;
    if (a % 23 == 0) return true;
    if (a % 29 == 0) return true;
    if (a % 31 == 0) return true;
    if (a % 37 == 0) return true;
    if (a % 41 == 0) return true;
    if (a % 43 == 0) return true;
    if (a % 47 == 0) return true;
    if (a % 53 == 0) return true;
    if (a % 59 == 0) return true;
    if (a % 61 == 0) return true;
    if (a % 67 == 0) return true;
    if (a % 71 == 0) return true;
    if (a % 73 == 0) return true;
    if (a % 79 == 0) return true;
    if (a % 83 == 0) return true;
    if (a % 89 == 0) return true;
    if (a % 97 == 0) return true;
    if (a % 101 == 0) return true;
    if (a % 103 == 0) return true;
    if (a % 107 == 0) return true;
    if (a % 109 == 0) return true;
    if (a % 113 == 0) return true;
    if (a % 127 == 0) return true;
    if (a % 131 == 0) return true;
    if (a % 137 == 0) return true;
    if (a % 139 == 0) return true;
    if (a % 143 == 0) return true;
    if (a % 147 == 0) return true;
    if (a % 149 == 0) return true;
    if (a % 151 == 0) return true;
    if (a % 157 == 0) return true;
    if (a % 163 == 0) return true;
    if (a % 167 == 0) return true;
    if (a % 169 == 0) return true;
    if (a % 171 == 0) return true;
    if (a % 173 == 0) return true;
    if (a % 179 == 0) return true;
    if (a % 181 == 0) return true;
    if (a % 191 == 0) return true;
    if (a % 193 == 0) return true;
    if (a % 197 == 0) return true;
    if (a % 199 == 0) return true;
    if (a % 211 == 0) return true;
    if (a % 223 == 0) return true;
    if (a % 227 == 0) return true;
    if (a % 229 == 0) return true;
    if (a % 233 == 0) return true;
    if (a % 239 == 0) return true;
    if (a %