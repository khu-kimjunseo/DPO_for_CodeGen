#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long closest_integer(std::string value) {
    std::stringstream ss(value);
    std::string word;
    long res = 0;
    while (std::getline(ss, word)) {
        res += closest_integer(word);
    }
    return res;
}
int main() {
    auto candidate = closest_integer;
    assert(candidate(("10")) == (10));
    assert(candidate(("14.5")) == (15));
    assert(candidate(("-15.5")) == (-16));
    assert(candidate(("15.3")) == (15));
    assert(candidate(("0")) == (0));
}
