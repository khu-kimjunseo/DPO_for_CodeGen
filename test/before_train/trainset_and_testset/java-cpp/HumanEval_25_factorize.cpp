#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> factorize(long n) {
    std::vector<long> fact(n+1);
    long i = 2;
    while (i <= n) {
        if (n % i == 0) {
            fact[i] = i;
            n /= i;
        } else {
            i++;
        }
    }
    return fact;
}
int main() {
    auto candidate = factorize;
    assert(candidate((2)) == (std::vector<long>({(long)2})));
    assert(candidate((4)) == (std::vector<long>({(long)2, (long)2})));
    assert(candidate((8)) == (std::vector<long>({(long)2, (long)2, (long)2})));
    assert(candidate((57)) == (std::vector<long>({(long)3, (long)19})));
    assert(candidate((3249)) == (std::vector<long>({(long)3, (long)3, (long)19, (long)19})));
    assert(candidate((185193)) == (std::vector<long>({(long)3, (long)3, (long)3, (long)19, (long)19, (long)19})));
    assert(candidate((20577)) == (std::vector<long>({(long)3, (long)19, (long)19, (long)19})));
    assert(candidate((18)) == (std::vector<long>({(long)2, (long)3, (long)3})));
}
