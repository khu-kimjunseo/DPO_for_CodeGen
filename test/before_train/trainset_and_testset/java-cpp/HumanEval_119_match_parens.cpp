#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string match_parens(std::vector<std::string> lst) {
    std::stringstream ss;
    std::string s;
    for (int i = 0; i < lst.size(); i++) {
        s = lst.at(i);
        ss << s;
        if (i < lst.size() - 1) {
            ss << "(";
        }
    }
    return ss.str();
}
int main() {
    auto candidate = match_parens;
    assert(candidate((std::vector<std::string>({(std::string)"()(", (std::string)")"}))) == ("Yes"));
    assert(candidate((std::vector<std::string>({(std::string)")", (std::string)")"}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)"(()(())", (std::string)"())())"}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)")())", (std::string)"(()()("}))) == ("Yes"));
    assert(candidate((std::vector<std::string>({(std::string)"(())))", (std::string)"(()())(("}))) == ("Yes"));
    assert(candidate((std::vector<std::string>({(std::string)"()", (std::string)"())"}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)"(()(", (std::string)"()))()"}))) == ("Yes"));
    assert(candidate((std::vector<std::string>({(std::string)"((((", (std::string)"((())"}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)")(()", (std::string)"(()("}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)")(", (std::string)")("}))) == ("No"));
    assert(candidate((std::vector<std::string>({(std::string)"(", (std::string)")"}))) == ("Yes"));
    assert(candidate((std::vector<std::string>({(std::string)")", (std::string)"("}))) == ("Yes"));
}
