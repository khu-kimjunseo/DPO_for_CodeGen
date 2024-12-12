#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> filtered;
    std::stringstream ss;
    ss << strings.at(0);
    std::string s = ss.str();
    ss.str("");
    ss << prefix;
    std::string prefix_str = ss.str();
    ss.str("");
    ss << strings.at(strings.size()-1);
    std::string s2 = ss.str();
    ss.str("");
    ss << prefix_str;
    std::string prefix_str2 = ss.str();
    ss.str("");
    ss << s2;
    std::string s3 = ss.str();
    ss.str("");
    ss << s3;
    std::string s4 = ss.str();
    ss.str("");
    ss << s4;
    std::string s5 = ss.str();
    ss.str("");
    ss << s5;
    std::string s6 = ss.str();
    ss.str("");
    ss << s6;
    std::string s7 = ss.str();
    ss.str("");
    ss << s7;
    std::string s8 = ss.str();
    ss.str("");
    ss << s8;
    std::string s9 = ss.str();
    ss.str("");
    ss << s9;
    std::string s10 = ss.str();
    ss.str("");
    ss << s10;
    std::string s11 = ss.str();
    ss.str("");
    ss << s11;
    std::string s12 = ss.str();
    ss.str("");
    ss << s12;
    std::string s13 = ss.str();
    ss.str("");
    ss << s13;
    std::string s14 = ss.str();
    ss.str("");
    ss << s14;
    std::string s15 = ss.str();
    ss.str("");
    ss << s15;
    std::string s16 = ss.str();
    ss.str("");
    ss << s16;
    std::string s17 = ss.str();
    ss.str("");
    ss << s17;
    std::string s18 = ss.str();
    ss.str("");
    ss << s18;
    std::string s19 = ss.str();
    ss.str("");
    ss << s19;
    std::string s20 = ss.str();
    ss.str("");
    ss << s20;
    std::string s21 = ss.str();
    ss.str("");
    ss << s21;
    std::string s22 = ss.str();
    ss.str("");
    ss << s22;
    std::string s23 = ss.str();
    ss.str("");
    ss << s23;
    std::string s24 = ss.str();
    ss.str("");
    ss << s24;
    std::string s25 = ss.str();
    ss.str("");
    ss << s25;
    std::string s26 = ss.str();
    ss.str("");
    ss << s26;
    std::string s27 = ss.str();
    ss.str("");
    
}
int main() {
    auto candidate = filter_by_prefix;
    assert(candidate((std::vector<std::string>()), ("john")) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"xxx", (std::string)"asd", (std::string)"xxy", (std::string)"john doe", (std::string)"xxxAAA", (std::string)"xxx"})), ("xxx")) == (std::vector<std::string>({(std::string)"xxx", (std::string)"xxxAAA", (std::string)"xxx"})));
}
