#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long choose_num(long x, long y) {
    if (x == y) {
        return x;
    }
    if (x > y) {
        return -1;
    }
    if (x == y) {
        return -1;
    }
    return x - 1;
}
int main() {
    auto candidate = choose_num;
    assert(candidate((12), (15)) == (14));
    assert(candidate((13), (12)) == (-1));
    assert(candidate((33), (12354)) == (12354));
    assert(candidate((5234), (5233)) == (-1));
    assert(candidate((6), (29)) == (28));
    assert(candidate((27), (10)) == (-1));
    assert(candidate((7), (7)) == (-1));
    assert(candidate((546), (546)) == (546));
}
