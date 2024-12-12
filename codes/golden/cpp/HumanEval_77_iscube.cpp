#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool iscube(long a) {
    a = abs(a);
    return pow(round(pow(a, 1. / 3)), 3) == a;
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
