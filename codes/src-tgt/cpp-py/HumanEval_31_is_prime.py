### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_prime(long n) {
    if (n < 2) {
        return false;
    }
    for (long k = 2; k < n; k++) {
        if (n % k == 0) {
            return false;
        }
    }
    return true;
}


### Python version

def is_prime(n:int) -> bool:
    if n < 2:
        return False
    for k in range(2, n - 1):
        if n % k == 0:
            return False
    return True
