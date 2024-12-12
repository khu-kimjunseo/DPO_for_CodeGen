#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_upper(std::string s) {
    long count = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (std::string("AEIOU").find(s[i]) != std::string::npos) {
            count += 1;
        }
    }
    return count;
}
int main() {
    auto candidate = count_upper;
    assert(candidate(("aBCdEf")) == (1));
    assert(candidate(("abcdefg")) == (0));
    assert(candidate(("dBBE")) == (0));
    assert(candidate(("B")) == (0));
    assert(candidate(("U")) == (1));
    assert(candidate(("")) == (0));
    assert(candidate(("EEEE")) == (2));
}
