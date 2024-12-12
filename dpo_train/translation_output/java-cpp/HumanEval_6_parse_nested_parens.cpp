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
    std::string s;
    while (std::getline(ss, s, '(')) {
        long depth = 0;
        long max_depth = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                depth += 1;
                max_depth = Math.max(depth, max_depth);
            } else {
                depth -= 1;
            }
        }

        result.push_back(max_depth);
    }

    return result;
}
int main() {
    auto candidate = parse_nested_parens;
    assert(candidate(("(()()) ((())) () ((())()())")) == (std::vector<long>({(long)2, (long)3, (long)1, (long)3})));
    assert(candidate(("() (()) ((())) (((())))")) == (std::vector<long>({(long)1, (long)2, (long)3, (long)4})));
    assert(candidate(("(()(())((())))")) == (std::vector<long>({(long)4})));
}
