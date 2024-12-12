#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int l1 = 0;
    for (auto st : lst1) {
        l1 += st.size();
    }
    int l2 = 0;
    for (auto st : lst2) {
        l2 += st.size();
    }
    if (l1 <= l2) {
        return lst1;
    } else {
        return lst2;
    }
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
