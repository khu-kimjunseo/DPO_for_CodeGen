#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool any_int(float x, float y, float z) {
    return (x+y==z);
}
int main() {
    auto candidate = any_int;
    assert(candidate((float(2)), (float(3)), (float(1))) == (true));
    assert(candidate((2.5f), (float(2)), (float(3))) == (false));
    assert(candidate((1.5f), (float(5)), (3.5f)) == (false));
    assert(candidate((float(2)), (float(6)), (float(2))) == (false));
    assert(candidate((float(4)), (float(2)), (float(2))) == (true));
    assert(candidate((2.2f), (2.2f), (2.2f)) == (false));
    assert(candidate((float(-4)), (float(6)), (float(2))) == (true));
    assert(candidate((float(2)), (float(1)), (float(1))) == (true));
    assert(candidate((float(3)), (float(4)), (float(7))) == (true));
    assert(candidate((3.0f), (float(4)), (float(7))) == (false));
}
