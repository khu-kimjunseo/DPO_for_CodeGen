#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long digitSum(std::string s) {
    if (s == "") return 0;
    long ans = 0;
    for (char c : s) {
        if (isupper(c)) ans += c;
    }
    return ans;
}
int main() {
    auto candidate = digitSum;
    assert(candidate(("")) == (0));
    assert(candidate(("abAB")) == (131));
    assert(candidate(("abcCd")) == (67));
    assert(candidate(("helloE")) == (69));
    assert(candidate(("woArBld")) == (131));
    assert(candidate(("aAaaaXa")) == (153));
    assert(candidate((" How are yOu?")) == (151));
    assert(candidate(("You arE Very Smart")) == (327));
}
