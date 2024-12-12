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
    std::unordered_map<char, long> m;
    std::unordered_set<char> s_set;
    std::stringstream ss(s);
    std::string word;
    while (std::getline(ss, word)) {
        if (word.size() == 0) {
            continue;
        }
        if (word.size() == 1) {
            continue;
        }
        if (word.size() == 2) {
            if (s_set.find(word.at(0)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(0));
            continue;
        }
        if (word.size() == 3) {
            if (s_set.find(word.at(0)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(0));
            if (s_set.find(word.at(1)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(1));
            if (s_set.find(word.at(2)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(2));
            continue;
        }
        if (word.size() == 4) {
            if (s_set.find(word.at(0)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(0));
            if (s_set.find(word.at(1)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(1));
            if (s_set.find(word.at(2)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(2));
            if (s_set.find(word.at(3)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(3));
            continue;
        }
        if (word.size() == 5) {
            if (s_set.find(word.at(0)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(0));
            if (s_set.find(word.at(1)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(1));
            if (s_set.find(word.at(2)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(2));
            if (s_set.find(word.at(3)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(3));
            if (s_set.find(word.at(4)) != s_set.end()) {
                continue;
            }
            s_set.insert(word.at(
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
