#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_equal_to_sum_even(long n) {
    return n%2 == 0 && n >= 8;
}
int main() {
    auto candidate = is_equal_to_sum_even;
    assert(candidate((4)) == (false));
    assert(candidate((6)) == (false));
    assert(candidate((8)) == (true));
    assert(candidate((10)) == (true));
    assert(candidate((11)) == (false));
    assert(candidate((12)) == (true));
    assert(candidate((13)) == (false));
    assert(candidate((16)) == (true));
}
