#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::stringstream ss(paren_string);
    std::string current_string;
    while (std::getline(ss, current_string)) {
        if (current_string.find("(") != std::string::npos) {
            result.push_back(current_string);
        }
    }
    return result;
}
int main() {
    auto candidate = separate_paren_groups;
    assert(candidate(("(()()) ((())) () ((())()())")) == (std::vector<std::string>({(std::string)"(()())", (std::string)"((()))", (std::string)"()", (std::string)"((())()())"})));
    assert(candidate(("() (()) ((())) (((())))")) == (std::vector<std::string>({(std::string)"()", (std::string)"(())", (std::string)"((()))", (std::string)"(((())))"})));
    assert(candidate(("(()(())((())))")) == (std::vector<std::string>({(std::string)"(()(())((())))"})));
    assert(candidate(("( ) (( )) (( )( ))")) == (std::vector<std::string>({(std::string)"()", (std::string)"(())", (std::string)"(()())"})));
}
