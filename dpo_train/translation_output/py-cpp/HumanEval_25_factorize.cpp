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
    std::vector<long> res;
    if (n == 1) {
        res.push_back(1);
        return res;
    }
    res.push_back(n);
    std::vector<long> factors = factorize(n - 1);
    for (long i = 0; i < factors.size(); i++) {
        res.push_back(factors[i] * factors[i]);
    }
    return res;
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
