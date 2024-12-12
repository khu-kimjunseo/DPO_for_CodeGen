#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long vowels_count(std::string s) {
    std::string vowels = "aeiouAEIOU";
    long n_vowels = std::count_if(s.begin(), s.end(), [&](char c){return vowels.find(c) != std::string::npos;});
    if (s.back() == 'y' || s.back() == 'Y') {
        n_vowels += 1;
    }
    return n_vowels;
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
