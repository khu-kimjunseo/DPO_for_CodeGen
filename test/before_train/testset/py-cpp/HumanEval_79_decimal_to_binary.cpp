#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string decimal_to_binary(long decimal) {
    std::stringstream ss;
    ss << decimal;
    return ss.str();
}
int main() {
    auto candidate = decimal_to_binary;
    assert(candidate((0)) == ("db0db"));
    assert(candidate((32)) == ("db100000db"));
    assert(candidate((103)) == ("db1100111db"));
    assert(candidate((15)) == ("db1111db"));
}
