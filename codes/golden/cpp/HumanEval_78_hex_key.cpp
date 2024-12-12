#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long hex_key(std::string num) {
    std::string primes = "2357BD";
    int total = 0;
    for (int i = 0; i < num.length(); i++) {
        if (primes.find(num[i]) != std::string::npos) {
            total++;
        }
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
