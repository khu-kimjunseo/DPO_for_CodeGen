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
    long[] A = new long[(int)n+1];
    for (int i = 1; i <= n; i++) {
        A[i] = i*i-i+1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if ((A[i]+A[j]+A[k])%3 == 0) {
                ans++;
            }
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
