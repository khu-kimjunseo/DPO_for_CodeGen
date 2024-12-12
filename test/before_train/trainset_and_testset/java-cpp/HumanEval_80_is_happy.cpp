#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_happy(std::string s) {
    std::unordered_map<char, int> m;
    std::unordered_set<char> s1;
    std::unordered_set<char> s2;
    std::unordered_map<char, int> m1;
    std::unordered_set<char> s11;
    std::unordered_set<char> s21;
    std::unordered_map<char, int> m2;
    std::unordered_set<char> s12;
    std::unordered_set<char> s22;
    std::unordered_map<char, int> m3;
    std::unordered_set<char> s13;
    std::unordered_set<char> s23;
    std::unordered_map<char, int> m4;
    std::unordered_set<char> s14;
    std::unordered_set<char> s24;
    std::unordered_map<char, int> m5;
    std::unordered_set<char> s15;
    std::unordered_set<char> s25;
    std::unordered_map<char, int> m6;
    std::unordered_set<char> s16;
    std::unordered_set<char> s26;
    std::unordered_map<char, int> m7;
    std::unordered_set<char> s17;
    std::unordered_set<char> s2;
    std::unordered_map<char, int> m8;
    std::unordered_set<char> s18;
    std::unordered_set<char> s28;
    std::unordered_map<char, int> m9;
    std::unordered_set<char> s19;
    std::unordered_set<char> s2;
    std::unordered_map<char, int> m10;
    std::unordered_set<char> s110;
    std::unordered_set<char> s210;
    std::unordered_map<char, int> m11;
    std::unordered_set<char> s111;
    std::unordered_set<char> s211;
    std::unordered_map<char, int> m12;
    std::unordered_set<char> s112;
    std::unordered_set<char> s212;
    std::unordered_map<char, int> m13;
    std::unordered_set<char> s113;
    std::unordered_set<char> s213;
    std::unordered_map<char, int> m14;
    std::unordered_set<char> s114;
    std::unordered_set<char> s214;
    std::unordered_map<char, int> m15;
    std::unordered_set<char> s115;
    std::unordered_set<char> s215;
    std::unordered_map<char, int> m16;
}
int main() {
    auto candidate = is_happy;
    assert(candidate(("a")) == (false));
    assert(candidate(("aa")) == (false));
    assert(candidate(("abcd")) == (true));
    assert(candidate(("aabb")) == (false));
    assert(candidate(("adb")) == (true));
    assert(candidate(("xyy")) == (false));
    assert(candidate(("iopaxpoi")) == (true));
    assert(candidate(("iopaxioi")) == (false));
}
