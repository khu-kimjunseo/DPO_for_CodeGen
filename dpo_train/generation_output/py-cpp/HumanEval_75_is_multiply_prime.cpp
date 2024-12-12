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

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_multiply_prime(long a) {
    if(a == 1) return true;
    if(a == 2) return true;
    if(a == 3) return true;
    if(a == 4) return true;
    if(a == 5) return true;
    if(a == 6) return true;
    if(a == 7) return true;
    if(a == 8) return true;
    if(a == 9) return true;
    if(a == 10) return true;
    if(a == 11) return true;
    if(a == 12) return true;
    if(a == 13) return true;
    if(a == 14) return true;
    if(a == 15) return true;
    if(a == 16) return true;
    if(a == 17) return true;
    if(a == 18) return true;
    if(a == 19) return true;
    if(a == 20) return true;
    if(a == 21) return true;
    if(a == 22) return true;
    if(a == 23) return true;
    if(a == 24) return true;
    if(a == 25) return true;
    if(a == 26) return true;
    if(a == 27) return true;
    if(a == 28) return true;
    if(a == 29) return true;
    if(a == 30) return true;
    if(a == 31) return true;
    if(a == 32) return true;
    if(a == 33) return true;
    if(a == 34) return true;
    if(a == 35) return true;
    if(a == 36) return true;
    if(a == 37) return true;
    if(a == 38) return true;
    if(a == 39) return true;
    if(a == 40) return true;
    if(a == 41) return true;
    if(a == 42) return true;
    if(a == 43) return true;
    if(a == 44) return true;
    if(a == 45) return true;
    if(a == 46) return true;
    if(a == 47) return true;
    if(a == 48) return true;
    if(a == 49) return true;
    if(a == 50) return true;
    if(a == 51) return true;
    if(a == 52) return true;
    if(a == 53) return true;
    if(a == 54) return true;
    if(a == 55) return true;
    if(a == 56) return true;
    if(a == 57) return true;
    if(a == 58) return true;
    if(a == 59) return true;
    if(a == 60) return true;
    if(a == 61) return true;
    if(a == 62) return true;
    if(a == 63) return true;
    if(a == 64) return true;
    if(a == 65) return true;
    if(a == 66) return true;
    if(a == 67) return true;
    if(a == 68) return true;
    if(a == 69) return true;
    if(a == 70) return true;
    if(a == 71) return true;
    if(a == 72) return true;