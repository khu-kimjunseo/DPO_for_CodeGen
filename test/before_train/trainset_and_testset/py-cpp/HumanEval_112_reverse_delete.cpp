#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::tuple<std::string, bool> reverse_delete(std::string s, std::string c) {
    std::stringstream ss;
    ss << s;
    std::stringstream ss2;
    ss2 << c;
    std::string s2 = ss.str();
    std::string s3 = ss2.str();
    std::string s4 = s2;
    std::string s5 = s3;
    std::string s6 = s4;
    std::string s7 = s5;
    std::string s8 = s6;
    std::string s9 = s7;
    std::string s10 = s8;
    std::string s11 = s9;
    std::string s12 = s10;
    std::string s13 = s11;
    std::string s14 = s12;
    std::string s15 = s13;
    std::string s16 = s14;
    std::string s17 = s15;
    std::string s18 = s16;
    std::string s19 = s17;
    std::string s20 = s18;
    std::string s21 = s19;
    std::string s22 = s20;
    std::string s23 = s21;
    std::string s24 = s22;
    std::string s25 = s23;
    std::string s26 = s24;
    std::string s27 = s25;
    std::string s28 = s26;
    std::string s29 = s27;
    std::string s30 = s28;
    std::string s31 = s29;
    std::string s32 = s30;
    std::string s33 = s31;
    std::string s34 = s32;
    std::string s35 = s33;
    std::string s36 = s34;
    std::string s37 = s35;
    std::string s38 = s36;
    std::string s39 = s37;
    std::string s40 = s38;
    std::string s41 = s39;
    std::string s42 = s40;
    std::string s43 = s41;
    std::string s44 = s42;
    std::string s45 = s43;
    std::string s46 = s44;
    std::string s47 = s45;
    std::string s48 = s46;
    std::string s49 = s47;
    std::string s50 = s48;
    std::string s51 = s49;
    std::string s52 = s50;
    std::string s53 = s51;
    std::string s54 = s52;
    std::string s55 = s53;
    std::string s56 = s54;
    std::string s57 = s56;
    std::string s58 = s57;
    std::string s59 = s58;
    std::string s60 = s59;
    std::string s61 = s60;
    std::string s62 = s61;
    std::string s63 = s62;
    std::string s64 = s63;
    std::string s65 = s64;
    std::string s66 = s65;
    std::string s67 = s66;
    std::string s68 = s67;
    std::string s69 = s68;
    std::string s70 = s69;
    std::string s71 = s70;
    std::string s72 = s71;
    std::string s73 = s72;
    std::string s74 = s73;
    std::string s75 = s74;
    std::string s
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
