#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_distinct_characters(std::string string) {
    std::set<char> s;
    for (auto c : string) {
        s.insert(tolower(c));
    }
    return s.size();
}
int main() {
    auto candidate = count_distinct_characters;
    assert(candidate(("")) == (0));
    assert(candidate(("abcde")) == (5));
    assert(candidate(("abcdecadeCADE")) == (5));
    assert(candidate(("aaaaAAAAaaaa")) == (1));
    assert(candidate(("Jerry jERRY JeRRRY")) == (5));
}
