### Python version

def hex_key(num: str) -> int:
    primes = ('2', '3', '5', '7', 'B', 'D')
    total = 0
    for i in range(0, len(num)):
        if num[i] in primes:
            total += 1
    return total

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
long hex_key(std::string num) {
    std::stringstream ss;
    ss << std::hex << num;
    std::string num_str = ss.str();
    std::vector<std::string> v;
    std::regex rx("[0-9a-fA-F]{1,8}");
    std::smatch m;
    std::regex_search(num_str, m, rx);
    if (m.size() == 0) {
        return 0;
    }
    std::stringstream ss;
    ss << std::hex << m[1];
    std::string num_str_1 = ss.str();
    std::vector<std::string> v1;
    std::regex rx1("[0-9a-fA-F]{1,8}");
    std::smatch m1;
    std::regex_search(num_str_1, m1, rx1);
    if (m1.size() == 0) {
        return 0;
    }
    std::stringstream ss1;
    ss1 << std::hex << m1[1];
    std::string num_str_2 = ss1.str();
    std::vector<std::string> v2;
    std::regex rx2("[0-9a-fA-F]{1,8}");
    std::smatch m2;
    std::regex_search(num_str_2, m2, rx2);
    if (m2.size() == 0) {
        return 0;
    }
    std::stringstream ss2;
    ss2 << std::hex << m2[1];
    std::string num_str_3 = ss2.str();
    std::vector<std::string> v3;
    std::regex rx3("[0-9a-fA-F]{1,8}");
    std::smatch m3;
    std::regex_search(num_str_3, m3, rx3);
    if (m3.size() == 0) {
        return 0;
    }
    std::stringstream ss3;
    ss3 << std::hex << m3[1];
    std::string num_str_4 = ss3.str();
    std::vector<std::string> v4;
    std::regex rx4("[0-9a-fA-F]{1,8}");
    std::smatch m4;
    std::regex_search(num_str_4, m4, rx4);
    if (m4.size() == 0) {
        return 0;
    }
    std::stringstream ss4;
    ss4 << std::hex << m4[1];
    std::string num_str_5 = ss4.str();
    std::vector<std::string> v5;
    std::regex rx5("[0-9a-fA-F]{1,8}");
    std::smatch m5;
    std::regex_search(num_str_5, m5, rx5);
    if (m5.size() == 0) {
        return 0;
    }
    std::stringstream ss5;
    ss5 << std::hex << m5[1];
    std::string num_str_6 = ss5.str();
    std::vector<std::string> v6;
    std::regex rx6("[0-9a-fA-F]{1,8}");
    std::smatch m6;
    