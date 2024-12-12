#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> factorize(long n) {
    std::vector<long> fact;
    long i = 2;
    while (i <= sqrt(n) + 1) {
        if (n % i == 0) {
            fact.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        fact.push_back(n);
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
