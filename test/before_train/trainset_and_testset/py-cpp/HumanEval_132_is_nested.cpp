#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_nested(std::string string) {
    std::stringstream ss;
    ss << string;
    std::string s = ss.str();
    std::stringstream ss2;
    ss2 << s;
    std::string s2 = ss2.str();
    std::stringstream ss3;
    ss3 << s2;
    std::string s3 = ss3.str();
    std::stringstream ss4;
    ss4 << s3;
    std::string s4 = ss4.str();
    std::stringstream ss5;
    ss5 << s4;
    std::string s5 = ss5.str();
    std::stringstream ss6;
    ss6 << s5;
    std::string s6 = ss6.str();
    std::stringstream ss7;
    ss7 << s6;
    std::string s7 = ss7.str();
    std::stringstream ss8;
    ss8 << s7;
    std::string s8 = ss8.str();
    std::stringstream ss9;
    ss9 << s8;
    std::string s9 = ss9.str();
    std::stringstream ss10;
    ss10 << s9;
    std::string s10 = ss10.str();
    std::stringstream ss11;
    ss11 << s10;
    std::string s11 = ss11.str();
    std::stringstream ss12;
    ss12 << s11;
    std::string s12 = ss12.str();
    std::stringstream ss13;
    ss13 << s12;
    std::string s13 = ss13.str();
    std::stringstream ss14;
    ss14 << s13;
    std::string s14 = ss14.str();
    std::stringstream ss15;
    ss15 << s14;
    std::string s15 = ss15.str();
    std::stringstream ss16;
    ss16 << s15;
    std::string s16 = ss16.str();
    std::stringstream ss17;
    ss17 << s16;
    std::string s17 = ss17.str();
    std::stringstream ss18;
    ss18 << s17;
    std::string s18 = ss18.str();
    std::stringstream ss19;
    ss19 << s18;
    std::string s19 = ss19.str();
    std::stringstream ss20;
    ss20 << s19;
    std::string s20 = ss20.str();
    std::stringstream ss21;
    ss21 << s20;
    std::string s21 = ss21.str();
    std::stringstream ss22;
    ss22 << s21;
    std::string s22 = ss22.str();
    std::stringstream ss23;
    ss23 << s22;
    std::string s23 = ss23.str();
    std::stringstream ss24;
    ss24 << s23;
    std::string s24 = ss24.str();
    std::stringstream ss25;
    ss25 << s24;
    std::string s25 = ss25.str();
    std::stringstream ss26;
    
}
int main() {
    auto candidate = is_nested;
    assert(candidate(("[[]]")) == (true));
    assert(candidate(("[]]]]]]][[[[[]")) == (false));
    assert(candidate(("[][]")) == (false));
    assert(candidate(("[]")) == (false));
    assert(candidate(("[[[[]]]]")) == (true));
    assert(candidate(("[]]]]]]]]]]")) == (false));
    assert(candidate(("[][][[]]")) == (true));
    assert(candidate(("[[]")) == (false));
    assert(candidate(("[]]")) == (false));
    assert(candidate(("[[]][[")) == (true));
    assert(candidate(("[[][]]")) == (true));
    assert(candidate(("")) == (false));
    assert(candidate(("[[[[[[[[")) == (false));
    assert(candidate(("]]]]]]]]")) == (false));
}
