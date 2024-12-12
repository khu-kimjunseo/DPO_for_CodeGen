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
int main() {
    auto candidate = is_prime;
    assert(candidate((6)) == (false));
    assert(candidate((101)) == (true));
    assert(candidate((11)) == (true));
    assert(candidate((13441)) == (true));
    assert(candidate((61)) == (true));
    assert(candidate((4)) == (false));
    assert(candidate((1)) == (false));
    assert(candidate((5)) == (true));
    assert(candidate((11)) == (true));
    assert(candidate((17)) == (true));
    assert(candidate((85)) == (false));
    assert(candidate((77)) == (false));
    assert(candidate((255379)) == (false));
}
