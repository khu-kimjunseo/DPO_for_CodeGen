#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long hex_key(std::string num) {
    std::stringstream ss;
    ss << num;
    std::string num_str = ss.str();
    std::string num_hex = num_str.substr(0,2);
    long total = 0;
    for (int i = 0; i < num_hex.length(); i++) {
        total += (long)num_hex.at(i) * (long)num_str.at(i);
    }
    return total;
}
int main() {
    auto candidate = hex_key;
    assert(candidate(("AB")) == (1));
    assert(candidate(("1077E")) == (2));
    assert(candidate(("ABED1A33")) == (4));
    assert(candidate(("2020")) == (2));
    assert(candidate(("123456789ABCDEF0")) == (6));
    assert(candidate(("112233445566778899AABBCCDDEEFF00")) == (12));
}
