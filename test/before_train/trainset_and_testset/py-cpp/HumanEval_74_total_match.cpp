#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> res;
    std::string s1 = "";
    std::string s2 = "";
    
    for (int i = 0; i < lst1.size(); i++) {
        s1 += lst1[i];
    }
    
    for (int i = 0; i < lst2.size(); i++) {
        s2 += lst2[i];
    }
    
    std::stringstream ss1(s1);
    std::stringstream ss2(s2);
    
    std::string s1_str = "";
    std::string s2_str = "";
    
    while (std::getline(ss1, s1_str)) {
        s1_str += s1;
    }
    
    while (std::getline(ss2, s2_str)) {
        s2_str += s2;
    }
    
    std::string s1_str_2 = "";
    std::string s2_str_2 = "";
    
    while (std::getline(ss1, s1_str_2)) {
        s1_str_2 += s1;
    }
    
    while (std::getline(ss2, s2_str_2)) {
        s2_str_2 += s2;
    }
    
    std::string s1_str_3 = "";
    std::string s2_str_3 = "";
    
    while (std::getline(ss1, s1_str_3)) {
        s1_str_3 += s1;
    }
    
    while (std::getline(ss2, s2_str_3)) {
        s2_str_3 += s2;
    }
    
    std::string s1_str_4 = "";
    std::string s2_str_4 = "";
    
    while (std::getline(ss1, s1_str_4)) {
        s1_str_4 += s1;
    }
    
    while (std::getline(ss2, s2_str_4)) {
        s2_str_4 += s2;
    }
    
    std::string s1_str_5 = "";
    std::string s2_str_5 = "";
    
    while (std::getline(ss1, s1_str_5)) {
        s1_str_5 += s1;
    }
    
    while (std::getline(ss2, s2_str_5)) {
        s2_str_5 += s2;
    }
    
    std::string s1_str_6 = "";
    std::string s2_str_6 = "";
    
    while (std::getline(ss1, s1_str_6)) {
        s1_str_6 += s1;
    }
    
    while (std::getline(ss2, s2_str_6)) {
        s2_str_6 += s2;
    }
    
    std::string s1_str_7 = "";
    std::string s2_str_7 = "";
    
    while (std::getline(ss1, s1_str_7)) {

}
int main() {
    auto candidate = total_match;
    assert(candidate((std::vector<std::string>()), (std::vector<std::string>())) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"hi", (std::string)"admin"})), (std::vector<std::string>({(std::string)"hi", (std::string)"hi"}))) == (std::vector<std::string>({(std::string)"hi", (std::string)"hi"})));
    assert(candidate((std::vector<std::string>({(std::string)"hi", (std::string)"admin"})), (std::vector<std::string>({(std::string)"hi", (std::string)"hi", (std::string)"admin", (std::string)"project"}))) == (std::vector<std::string>({(std::string)"hi", (std::string)"admin"})));
    assert(candidate((std::vector<std::string>({(std::string)"4"})), (std::vector<std::string>({(std::string)"1", (std::string)"2", (std::string)"3", (std::string)"4", (std::string)"5"}))) == (std::vector<std::string>({(std::string)"4"})));
    assert(candidate((std::vector<std::string>({(std::string)"hi", (std::string)"admin"})), (std::vector<std::string>({(std::string)"hI", (std::string)"Hi"}))) == (std::vector<std::string>({(std::string)"hI", (std::string)"Hi"})));
    assert(candidate((std::vector<std::string>({(std::string)"hi", (std::string)"admin"})), (std::vector<std::string>({(std::string)"hI", (std::string)"hi", (std::string)"hi"}))) == (std::vector<std::string>({(std::string)"hI", (std::string)"hi", (std::string)"hi"})));
    assert(candidate((std::vector<std::string>({(std::string)"hi", (std::string)"admin"})), (std::vector<std::string>({(std::string)"hI", (std::string)"hi", (std::string)"hii"}))) == (std::vector<std::string>({(std::string)"hi", (std::string)"admin"})));
    assert(candidate((std::vector<std::string>()), (std::vector<std::string>({(std::string)"this"}))) == (std::vector<std::string>()));
    assert(candidate((std::vector<std::string>({(std::string)"this"})), (std::vector<std::string>())) == (std::vector<std::string>()));
}
