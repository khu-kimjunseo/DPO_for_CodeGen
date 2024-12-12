#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long fibfib(long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
}
int main() {
    auto candidate = fibfib;
    assert(candidate((2)) == (1));
    assert(candidate((1)) == (0));
    assert(candidate((5)) == (4));
    assert(candidate((8)) == (24));
    assert(candidate((10)) == (81));
    assert(candidate((12)) == (274));
    assert(candidate((14)) == (927));
}
