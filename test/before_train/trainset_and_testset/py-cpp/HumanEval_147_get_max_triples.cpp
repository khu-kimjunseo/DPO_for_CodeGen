#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long get_max_triples(long n) {
    long ans = 0;
    for (long i = 1; i <= n; i++) {
        if (i%2 == 0) {
            ans += i;
        }
    }
    return ans;
}
int main() {
    auto candidate = get_max_triples;
    assert(candidate((5)) == (1));
    assert(candidate((6)) == (4));
    assert(candidate((10)) == (36));
    assert(candidate((100)) == (53361));
}
