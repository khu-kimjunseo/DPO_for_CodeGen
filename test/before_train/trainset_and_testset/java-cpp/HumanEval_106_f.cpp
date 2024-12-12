#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> f(long n) {
    std::vector<long> ret;
    for (long i=1; i<=n; i++) {
        if (i%2 == 0) {
            long x = 1;
            for (long j=1; j<=i; j++) x *= j;
            ret.push_back(x);
        } else {
            long x = 0;
            for (long j=1; j<=i; j++) x += j;
            ret.push_back(x);
        }
    }
    return ret;
}
int main() {
    auto candidate = f;
    assert(candidate((5)) == (std::vector<long>({(long)1, (long)2, (long)6, (long)24, (long)15})));
    assert(candidate((7)) == (std::vector<long>({(long)1, (long)2, (long)6, (long)24, (long)15, (long)720, (long)28})));
    assert(candidate((1)) == (std::vector<long>({(long)1})));
    assert(candidate((3)) == (std::vector<long>({(long)1, (long)2, (long)6})));
}
