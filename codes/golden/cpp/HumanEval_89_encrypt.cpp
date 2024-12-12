#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string encrypt(std::string s) {
    std::string d = "abcdefghijklmnopqrstuvwxyz";
    std::string out = "";
    for (char c : s) {
        if (d.find(c) != std::string::npos) {
            out += d[(d.find(c)+2*2) % 26];
        } else {
            out += c;
        }
    }
    return out;
}
int main() {
    auto candidate = encrypt;
    assert(candidate(("hi")) == ("lm"));
    assert(candidate(("asdfghjkl")) == ("ewhjklnop"));
    assert(candidate(("gf")) == ("kj"));
    assert(candidate(("et")) == ("ix"));
    assert(candidate(("faewfawefaewg")) == ("jeiajeaijeiak"));
    assert(candidate(("hellomyfriend")) == ("lippsqcjvmirh"));
    assert(candidate(("dxzdlmnilfuhmilufhlihufnmlimnufhlimnufhfucufh")) == ("hbdhpqrmpjylqmpyjlpmlyjrqpmqryjlpmqryjljygyjl"));
    assert(candidate(("a")) == ("e"));
}
