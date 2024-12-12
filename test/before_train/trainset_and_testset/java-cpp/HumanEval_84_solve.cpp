#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string solve(long N) {
    std::stringstream ss;
    ss << N;
    return ss.str();
}
int main() {
    auto candidate = solve;
    assert(candidate((1000)) == ("1"));
    assert(candidate((150)) == ("110"));
    assert(candidate((147)) == ("1100"));
    assert(candidate((333)) == ("1001"));
    assert(candidate((963)) == ("10010"));
}
