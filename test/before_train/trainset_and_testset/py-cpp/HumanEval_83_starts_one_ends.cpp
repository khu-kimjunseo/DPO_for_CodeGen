#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long starts_one_ends(long n) {
    long ans = 0;
    for (long i = 1; i <= n; i++) {
        if (i % 2 == 0) ans += i;
        else ans += starts_one_ends(i);
    }
    return ans;
}
int main() {
    auto candidate = starts_one_ends;
    assert(candidate((1)) == (1));
    assert(candidate((2)) == (18));
    assert(candidate((3)) == (180));
    assert(candidate((4)) == (1800));
    assert(candidate((5)) == (18000));
}
