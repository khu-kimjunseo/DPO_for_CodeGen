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
    long s = 0;
    for (long i = 0; i < n; i++) {
        if (i % 7 == 0 || i % 11 == 0) {
            s += i;
        }
    }
    return s;
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
