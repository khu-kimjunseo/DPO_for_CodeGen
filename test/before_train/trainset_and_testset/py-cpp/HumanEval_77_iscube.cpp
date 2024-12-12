#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool iscube(long a) {
    return a == (a & (a - 1)) >> 1;
}
int main() {
    auto candidate = iscube;
    assert(candidate((1)) == (true));
    assert(candidate((2)) == (false));
    assert(candidate((-1)) == (true));
    assert(candidate((64)) == (true));
    assert(candidate((180)) == (false));
    assert(candidate((1000)) == (true));
    assert(candidate((0)) == (true));
    assert(candidate((1729)) == (false));
}
