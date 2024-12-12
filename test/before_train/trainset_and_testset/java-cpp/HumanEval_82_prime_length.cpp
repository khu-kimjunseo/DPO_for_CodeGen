#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool prime_length(std::string string) {
    int l = string.length();
    if (l <= 1) {
        return false;
    }
    for (int i = 2; i < l; i++) {
        if (l % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    auto candidate = prime_length;
    assert(candidate(("Hello")) == (true));
    assert(candidate(("abcdcba")) == (true));
    assert(candidate(("kittens")) == (true));
    assert(candidate(("orange")) == (false));
    assert(candidate(("wow")) == (true));
    assert(candidate(("world")) == (true));
    assert(candidate(("MadaM")) == (true));
    assert(candidate(("Wow")) == (true));
    assert(candidate(("")) == (false));
    assert(candidate(("HI")) == (true));
    assert(candidate(("go")) == (true));
    assert(candidate(("gogo")) == (false));
    assert(candidate(("aaaaaaaaaaaaaaa")) == (false));
    assert(candidate(("Madam")) == (true));
    assert(candidate(("M")) == (false));
    assert(candidate(("0")) == (false));
}
