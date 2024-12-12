#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> get_odd_collatz(long n) {
    std::vector<long> oddCollatz(n);
    for (long i = 1; i <= n; i++) {
        oddCollatz[i] = i;
    }
    return oddCollatz;
}
int main() {
    auto candidate = get_odd_collatz;
    assert(candidate((14)) == (std::vector<long>({(long)1, (long)5, (long)7, (long)11, (long)13, (long)17})));
    assert(candidate((5)) == (std::vector<long>({(long)1, (long)5})));
    assert(candidate((12)) == (std::vector<long>({(long)1, (long)3, (long)5})));
    assert(candidate((1)) == (std::vector<long>({(long)1})));
}
