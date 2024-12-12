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
    std::unordered_map<std::string, std::string> map;
    std::unordered_set<std::string> set;
    std::vector<std::string> vector;
    std::stringstream ss;
    std::string str;
    std::stringstream ss2;
    std::string str2;
    std::stringstream ss3;
    std::string str3;
    std::stringstream ss4;
    std::string str4;
    std::stringstream ss5;
    std::string str5;
    std::stringstream ss6;
    std::string str6;
    std::stringstream ss7;
    std::string str7;
    std::stringstream ss8;
    std::string str8;
    std::stringstream ss9;
    std::string str9;
    std::stringstream ss10;
    std::string str10;
    std::stringstream ss11;
    std::string str11;
    std::stringstream ss12;
    std::string str12;
    std::stringstream ss13;
    std::string str13;
    std::stringstream ss14;
    std::string str14;
    std::stringstream ss15;
    std::string str15;
    std::stringstream ss16;
    std::string str16;
    std::stringstream ss17;
    std::string str17;
    std::stringstream ss18;
    std::string str18;
    std::stringstream ss19;
    std::string str19;
    std::stringstream ss20;
    std::string str20;
    std::stringstream ss21;
    std::string str21;
    std::stringstream ss22;
    std::string str22;
    std::stringstream ss23;
    std::string str23;
    std::stringstream ss24;
    std::string str24;
    std::stringstream ss25;
    std::string str25;
    std::stringstream ss26;
    std::string str26;
    std::stringstream ss27;
    std::string str27;
    std::stringstream ss28;
    std::string str28;
    std::stringstream ss29;
    std::string str29;
    std::stringstream ss30;
    std::string str30;
    std::stringstream ss31;
    std::string str31;
    std::stringstream ss32;
    std::string str32;
    std::stringstream ss33;
    std::string str33;
    std::stringstream ss34;
    std::string str34;
    std::stringstream ss35;
    std::string str35;
    std::stringstream ss36;
    std::string
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
