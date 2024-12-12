#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool cycpattern_check(std::string a, std::string b) {
    int l = b.length();
    std::string pat = b + b;
    for(int i = 0; i <= a.length() - l; i++) {
        for(int j = 0; j <= l; j++) {
            if(a.substr(i, l) == pat.substr(j, l)) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    auto candidate = cycpattern_check;
    assert(candidate(("xyzw"), ("xyw")) == (false));
    assert(candidate(("yello"), ("ell")) == (true));
    assert(candidate(("whattup"), ("ptut")) == (false));
    assert(candidate(("efef"), ("fee")) == (true));
    assert(candidate(("abab"), ("aabb")) == (false));
    assert(candidate(("winemtt"), ("tinem")) == (true));
}
