#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool correct_bracketing(std::string brackets) {
    int depth = 0;
    for (char b : brackets) {
        if (b == '(') {
            depth++;
        } else {
            depth--;
        }
        if (depth < 0) {
            return false;
        }
    }
    return depth == 0;
}
int main() {
    auto candidate = correct_bracketing;
    assert(candidate(("()")) == (true));
    assert(candidate(("(()())")) == (true));
    assert(candidate(("()()(()())()")) == (true));
    assert(candidate(("()()((()()())())(()()(()))")) == (true));
    assert(candidate(("((()())))")) == (false));
    assert(candidate((")(()")) == (false));
    assert(candidate(("(")) == (false));
    assert(candidate(("((((")) == (false));
    assert(candidate((")")) == (false));
    assert(candidate(("(()")) == (false));
    assert(candidate(("()()(()())())(()")) == (false));
    assert(candidate(("()()(()())()))()")) == (false));
}
