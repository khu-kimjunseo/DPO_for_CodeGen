#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long fib(long n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    auto candidate = fib;
    assert(candidate((10)) == (55));
    assert(candidate((1)) == (1));
    assert(candidate((8)) == (21));
    assert(candidate((11)) == (89));
    assert(candidate((12)) == (144));
}
