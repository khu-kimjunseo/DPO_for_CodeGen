#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long fib4(long n) {
    std::vector<long> results = {0, 0, 2, 0};
    if (n < 4) {
        return results[n];
    }
    for (long i = 4; i <= n; i++) {
        long next = results[0] + results[1] + results[2] + results[3];
        results.erase(results.begin());
        results.push_back(next);
    }
    return results[3];
}
int main() {
    auto candidate = fib4;
    assert(candidate((5)) == (4));
    assert(candidate((8)) == (28));
    assert(candidate((10)) == (104));
    assert(candidate((12)) == (386));
}
