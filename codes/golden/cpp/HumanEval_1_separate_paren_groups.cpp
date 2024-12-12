#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_string;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            current_string.push_back(c);
        } else if (c == ')') {
            current_depth--;
            current_string.push_back(c);
            if (current_depth == 0) {
                result.push_back(current_string);
                current_string.clear();
            }
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
