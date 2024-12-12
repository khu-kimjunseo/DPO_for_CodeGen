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
    if (n == 1) return 1;
    return (long)Math.pow(10, n - 2);
}
int main() {
    auto candidate = starts_one_ends;
    assert(candidate((1)) == (1));
    assert(candidate((2)) == (18));
    assert(candidate((3)) == (180));
    assert(candidate((4)) == (1800));
    assert(candidate((5)) == (18000));
}
