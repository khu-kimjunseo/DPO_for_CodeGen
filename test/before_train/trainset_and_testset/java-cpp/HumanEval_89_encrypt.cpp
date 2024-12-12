#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string encrypt(std::string s) {
    std::string out = "";
    for (char c : s) {
        if (c == 'a') {
            out += "A";
        } else if (c == 'b') {
            out += "B";
        } else if (c == 'c') {
            out += "C";
        } else if (c == 'd') {
            out += "D";
        } else if (c == 'e') {
            out += "E";
        } else if (c == 'f') {
            out += "F";
        } else if (c == 'g') {
            out += "G";
        } else if (c == 'h') {
            out += "H";
        } else if (c == 'i') {
            out += "I";
        } else if (c == 'j') {
            out += "J";
        } else if (c == 'k') {
            out += "K";
        } else if (c == 'l') {
            out += "L";
        } else if (c == 'm') {
            out += "M";
        } else if (c == 'n') {
            out += "N";
        } else if (c == 'o') {
            out += "O";
        } else if (c == 'p') {
            out += "P";
        } else if (c == 'q') {
            out += "Q";
        } else if (c == 'r') {
            out += "R";
        } else if (c == 's') {
            out += "S";
        } else if (c == 't') {
            out += "T";
        } else if (c == 'u') {
            out += "U";
        } else if (c == 'v') {
            out += "V";
        } else if (c == 'w') {
            out += "W";
        } else if (c == 'x') {
            out += "X";
        } else if (c == 'y') {
            out += "Y";
        } else if (c == 'z') {
            out += "Z";
        } else if (c == '0') {
            out += "0";
        } else if (c == '1') {
            out += "1";
        } else if (c == '2') {
            out += "2";
        } else if (c == '3') {
            out += "3";
        } else if (c == '4') {
            out += "4";
        } else if (c == '5') {
            out += "5";
        } else if (c == '6') {
            out += "6";
        } else if (c == '7') {
            out += "7";
        } else if (c == '8') {
            out += "8";
        } else if (c == '9') {
            out += "9";
        } else if (c == '-') {
            out += "-" + s;
        } else if (c == '_') {
            out += "_" + s;
        } else if (c == '
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
