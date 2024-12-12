#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> parse_nested_parens(std::string paren_string) {
    std::vector<long> result;
    std::stringstream ss(paren_string);
    std::string token;
    long count = 0;
    while (std::getline(ss, token, ' ')) {
        if (token == "(" && count == 0) {
            result.push_back(count);
        } else if (token == ")") {
            count += 1;
        } else {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}
int main() {
    auto candidate = parse_nested_parens;
    assert(candidate(("(()()) ((())) () ((())()())")) == (std::vector<long>({(long)2, (long)3, (long)1, (long)3})));
    assert(candidate(("() (()) ((())) (((())))")) == (std::vector<long>({(long)1, (long)2, (long)3, (long)4})));
    assert(candidate(("(()(())((())))")) == (std::vector<long>({(long)4})));
}
