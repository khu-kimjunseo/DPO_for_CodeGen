#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long add(long x, long y) {
    return x + y;
}
int main() {
    auto candidate = add;
    assert(candidate((0), (1)) == (1));
    assert(candidate((1), (0)) == (1));
    assert(candidate((2), (3)) == (5));
    assert(candidate((5), (7)) == (12));
    assert(candidate((7), (5)) == (12));
}
