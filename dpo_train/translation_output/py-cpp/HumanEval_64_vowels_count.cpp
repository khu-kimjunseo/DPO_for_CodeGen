#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long vowels_count(std::string s) {
    std::regex vowels("[aeiouAEIOU]");
    std::smatch m;
    std::regex_search(s, m, vowels);
    return m.size();
}
int main() {
    auto candidate = vowels_count;
    assert(candidate(("abcde")) == (2));
    assert(candidate(("Alone")) == (3));
    assert(candidate(("key")) == (2));
    assert(candidate(("bye")) == (1));
    assert(candidate(("keY")) == (2));
    assert(candidate(("bYe")) == (1));
    assert(candidate(("ACEDY")) == (3));
}
