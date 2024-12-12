### Python version

def check_if_last_char_is_a_letter(txt: str) -> bool:
 
    check = txt.split(' ')[-1]
    return True if len(check) == 1 and (97 <= ord(check.lower()) <= 122) else False

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::regex rx("[a-zA-Z]");
    std::smatch what;
    std::stringstream ss;
    ss << txt;
    std::string s = ss.str();
    std::smatch what2;
    std::regex_search(s, what2, rx);
    return what2.size() == 1;
}

int main() {
    std::string s = "abcdefghijklmnopqrstuvwxyz";
    std::stringstream ss;
    ss << s;
    std::string t = ss.str();
    std::stringstream ss2;
    ss2 << t;
    std::string t2 = ss2.str();
    std::stringstream ss3;
    ss3 << t2;
    std::string t3 = ss3.str();
    std::stringstream ss4;
    ss4 << t3;
    std::string t4 = ss4.str();
    std::stringstream ss5;
    ss5 << t4;
    std::string t5 = ss5.str();
    std::stringstream ss6;
    ss6 << t5;
    std::string t6 = ss6.str();
    std::stringstream ss7;
    ss7 << t6;
    std::string t7 = ss7.str();
    std::stringstream ss8;
    ss8 << t7;
    std::string t8 = ss8.str();
    std::stringstream ss9;
    ss9 << t8;
    std::string t9 = ss9.str();
    std::stringstream ss10;
    ss10 << t9;
    std::string t10 = ss10.str();
    std::stringstream ss11;
    ss11 << t10;
    std::string t11 = ss11.str();
    std::stringstream ss12;
    ss12 << t11;
    std::string t12 = ss12.str();
    std::stringstream ss13;
    ss13 << t12;
    std::string t13 = ss13.str();
    std::stringstream ss14;
    ss14 << t13;
    std::string t14 = ss14.str();
    std::stringstream ss15;
    ss15 << t14;
    std::string t15 = ss15.str();
    std::stringstream ss16;
    ss16 << t15;
    std::string t16 = ss16.str();
    std::stringstream ss17;
    ss17 << t16;
    std::string t17 = ss17.str();
    std::stringstream ss18;
    ss18 << t17;
    std::string t18 = ss18.str();
    std::stringstream ss19;
    ss19 << t18;
    std::string t19 = ss19.str();
    std::stringstream ss20;
    ss20 << t19;
    std::string t20 = ss20.str();
    std::stringstream ss21;
    ss21 << t20;
    std::string t21 = ss21.str();
    std::stringstream ss22;
    ss22 << t21;
    std::string t22 = ss22.str();
    std::stringstream ss23;
    ss23 << t22;
    std::string t23 = ss23.str();
    std::stringstream ss24;
    ss24 << t23;
    std::string t24 = ss24.str();
    std::stringstream ss25;
    ss25 << t24;
    std::