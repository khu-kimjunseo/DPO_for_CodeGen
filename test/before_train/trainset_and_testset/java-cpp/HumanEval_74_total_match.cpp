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
    std::string s1 = lst1.back();
    std::string s2 = lst2.back();
    std::string s1_len = s1.length();
    std::string s2_len = s2.length();
    int l1 = s1_len;
    int l2 = s2_len;
    int l1_len = s1.length();
    int l2_len = s2.length();
    int l1_len_len = l1_len + l2_len;
    int l2_len_len = l2_len + l1_len;
    int l1_len_len_len = l1_len_len + l2_len_len;
    int l2_len_len_len = l2_len_len + l1_len_len;
    int l1_len_len_len_len = l1_len_len_len + l2_len_len_len;
    int l2_len_len_len_len = l2_len_len_len + l1_len_len_len;
    int l1_len_len_len_len_len = l1_len_len_len_len + l2_len_len_len_len;
    int l2_len_len_len_len_len = l2_len_len_len_len + l1_len_len_len_len;
    int l1_len_len_len_len_len_len = l1_len_len_len_len_len + l2_len_len_len_len_len;
    int l1_len_len_len_len_len_len_len = l1_len_len_len_len_len_len + l2_len_len_len_len_len_len;
    int l1_len_len_len_len_len_len_len_len = l1_len_len_len_len_len_len_len + l2_len_len_len_len_len_len_len;
    int l1_len_len_len_len_len_len_len_len_len = l1_len_len_len_len_len_len_len_len_len + l2_len_len_len_len_len_len_len_len;
    int l1_len_len_len_len_len_len_len_len_len_len_len_len = l1_len_len_len_len_len_len_len_len_len_len_len_len + l2_len_len_len_len_len_len_len_len_len_len;
    int l1_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_len_
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
