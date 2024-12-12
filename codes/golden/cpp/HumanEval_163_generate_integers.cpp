#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> generate_integers(long a, long b) {
    long lower = std::max(2l, std::min(a, b));
    long upper = std::min(8l, std::max(a, b));
    std::vector<long> res;
    for (long i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            res.push_back(i);
        }
    }
    return res;
}
int main() {
    auto candidate = generate_integers;
    assert(candidate((2), (10)) == (std::vector<long>({(long)2, (long)4, (long)6, (long)8})));
    assert(candidate((10), (2)) == (std::vector<long>({(long)2, (long)4, (long)6, (long)8})));
    assert(candidate((132), (2)) == (std::vector<long>({(long)2, (long)4, (long)6, (long)8})));
    assert(candidate((17), (89)) == (std::vector<long>()));
}
