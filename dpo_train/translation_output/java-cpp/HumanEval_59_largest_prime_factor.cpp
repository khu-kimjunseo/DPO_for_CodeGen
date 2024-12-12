#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long largest_prime_factor(long n) {
    long largest = 1;
    for (long i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            largest = Math.max(largest, i);
        }
    }
    return largest;
}
int main() {
    auto candidate = largest_prime_factor;
    assert(candidate((15)) == (5));
    assert(candidate((27)) == (3));
    assert(candidate((63)) == (7));
    assert(candidate((330)) == (11));
    assert(candidate((13195)) == (29));
}
