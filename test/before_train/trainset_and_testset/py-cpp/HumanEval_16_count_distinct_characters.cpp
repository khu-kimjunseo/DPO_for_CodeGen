#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long count_distinct_characters(std::string string) {
    std::stringstream ss;
    ss << string;
    std::string s = ss.str();
    std::unordered_map<char, int> m;
    std::unordered_set<char> s_set;
    std::unordered_map<char, int>::iterator it;
    for (char c : s) {
        if (m.find(c) != m.end()) {
            m[c]++;
        } else {
            m[c] = 1;
        }
    }
    for (char c : s) {
        if (m.find(c) == m.end()) {
            s_set.insert(c);
        }
    }
    int count = 0;
    for (char c : s) {
        if (s_set.find(c) != s_set.end()) {
            count++;
        }
    }
    return count;
}
int main() {
    auto candidate = count_distinct_characters;
    assert(candidate(("")) == (0));
    assert(candidate(("abcde")) == (5));
    assert(candidate(("abcdecadeCADE")) == (5));
    assert(candidate(("aaaaAAAAaaaa")) == (1));
    assert(candidate(("Jerry jERRY JeRRRY")) == (5));
}
