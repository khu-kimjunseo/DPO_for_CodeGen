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
