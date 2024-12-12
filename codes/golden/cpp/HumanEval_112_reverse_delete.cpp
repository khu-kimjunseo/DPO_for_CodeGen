#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<std::string, bool> reverse_delete(std::string s, std::string c) {
    s.erase(std::remove_if(s.begin(), s.end(), [&c](char x) { return c.find(x) != std::string::npos; }), s.end());
    return {s, s == std::string(s.rbegin(), s.rend())};
}
int main() {
    auto candidate = reverse_delete;
    assert(candidate(("abcde"), ("ae")) == (std::make_tuple("bcd", false)));
    assert(candidate(("abcdef"), ("b")) == (std::make_tuple("acdef", false)));
    assert(candidate(("abcdedcba"), ("ab")) == (std::make_tuple("cdedc", true)));
    assert(candidate(("dwik"), ("w")) == (std::make_tuple("dik", false)));
    assert(candidate(("a"), ("a")) == (std::make_tuple("", true)));
    assert(candidate(("abcdedcba"), ("")) == (std::make_tuple("abcdedcba", true)));
    assert(candidate(("abcdedcba"), ("v")) == (std::make_tuple("abcdedcba", true)));
    assert(candidate(("vabba"), ("v")) == (std::make_tuple("abba", true)));
    assert(candidate(("mamma"), ("mia")) == (std::make_tuple("", true)));
}
