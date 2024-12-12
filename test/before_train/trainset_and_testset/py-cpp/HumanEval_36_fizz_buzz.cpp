#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long fizz_buzz(long n) {
    long ans = 0;
    for (long i = 1; i <= n; i++) {
        ans += (i % 11 == 0 || i % 13 == 0) ? fizz_buzz(i) : 0;
    }
    return ans;
}
int main() {
    auto candidate = fizz_buzz;
    assert(candidate((50)) == (0));
    assert(candidate((78)) == (2));
    assert(candidate((79)) == (3));
    assert(candidate((100)) == (3));
    assert(candidate((200)) == (6));
    assert(candidate((4000)) == (192));
    assert(candidate((10000)) == (639));
    assert(candidate((100000)) == (8026));
}
