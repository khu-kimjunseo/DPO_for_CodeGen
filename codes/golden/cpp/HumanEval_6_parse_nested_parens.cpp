#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> parse_nested_parens(std::string paren_string) {
    std::vector<long> res;
    std::stringstream ss(paren_string);
    std::string s;
    while (ss >> s) {
        long depth = 0, max_depth = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                max_depth = std::max(depth, max_depth);
            } else {
                depth--;
            }
        }
        res.push_back(max_depth);
    }
    return res;
}
int main() {
    auto candidate = parse_nested_parens;
    assert(candidate(("(()()) ((())) () ((())()())")) == (std::vector<long>({(long)2, (long)3, (long)1, (long)3})));
    assert(candidate(("() (()) ((())) (((())))")) == (std::vector<long>({(long)1, (long)2, (long)3, (long)4})));
    assert(candidate(("(()(())((())))")) == (std::vector<long>({(long)4})));
}
