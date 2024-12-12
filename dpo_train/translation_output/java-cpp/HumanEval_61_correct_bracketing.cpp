#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool correct_bracketing(std::string brackets) {
    std::stringstream ss;
    ss << brackets;
    std::string brackets_str = ss.str();
    std::stringstream ss2;
    ss2 << brackets_str;
    std::string brackets_str2 = ss2.str();
    std::stringstream ss3;
    ss3 << brackets_str2;
    std::string brackets_str3 = ss3.str();
    std::stringstream ss4;
    ss4 << brackets_str3;
    std::string brackets_str4 = ss4.str();
    std::stringstream ss5;
    ss5 << brackets_str4;
    std::string brackets_str5 = ss5.str();
    std::stringstream ss6;
    ss6 << brackets_str5;
    std::string brackets_str6 = ss6.str();
    std::stringstream ss7;
    ss7 << brackets_str6;
    std::string brackets_str7 = ss7.str();
    std::stringstream ss8;
    ss8 << brackets_str7;
    std::string brackets_str8 = ss8.str();
    std::stringstream ss9;
    ss9 << brackets_str8;
    std::string brackets_str9 = ss9.str();
    std::stringstream ss10;
    ss10 << brackets_str9;
    std::string brackets_str10 = ss10.str();
    std::stringstream ss11;
    ss11 << brackets_str10;
    std::string brackets_str11 = ss11.str();
    std::stringstream ss12;
    ss12 << brackets_str11;
    std::string brackets_str12 = ss12.str();
    std::stringstream ss13;
    ss13 << brackets_str12;
    std::string brackets_str13 = ss13.str();
    std::stringstream ss14;
    ss14 << brackets_str13;
    std::string brackets_str14 = ss14.str();
    std::stringstream ss15;
    ss15 << brackets_str14;
    std::string brackets_str15 = ss15.str();
    std::stringstream ss16;
    ss16 << brackets_str15;
    std::string brackets_str16 = ss16.str();
    std::stringstream ss17;
    ss17 << brackets_str16;
    std::string brackets_str17 = ss17.str();
    std::stringstream ss18;
    ss18 << brackets_str17;
    std::string brackets_str18 = ss18.str();
    std::stringstream ss19;
    ss19 << brackets_str18;
    std::string brackets_str19 = ss19.str();
    std::stringstream ss20;
    ss20 << brackets_str19;
    std::string brackets_str20 = ss20.str();
    std::stringstream ss21;
    ss21 << brackets_str20;
    std::string brackets_str21 = ss21.str();
    std::stringstream ss22;
    ss22 << brackets_str21;
    std::string brackets_str22 = ss22.str();
    std::stringstream ss23;
    ss23 << brackets_str22;
    std::string brackets_str23 = ss23.str();

}
int main() {
    auto candidate = correct_bracketing;
    assert(candidate(("()")) == (true));
    assert(candidate(("(()())")) == (true));
    assert(candidate(("()()(()())()")) == (true));
    assert(candidate(("()()((()()())())(()()(()))")) == (true));
    assert(candidate(("((()())))")) == (false));
    assert(candidate((")(()")) == (false));
    assert(candidate(("(")) == (false));
    assert(candidate(("((((")) == (false));
    assert(candidate((")")) == (false));
    assert(candidate(("(()")) == (false));
    assert(candidate(("()()(()())())(()")) == (false));
    assert(candidate(("()()(()())()))()")) == (false));
}
