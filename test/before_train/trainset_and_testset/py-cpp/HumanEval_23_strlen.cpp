#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long string_length(std::string string) {
    int len = 0;
    for (auto c : string) {
        len += 1;
    }
    return len;
}
int main() {
    auto candidate = string_length;
    assert(candidate(("")) == (0));
    assert(candidate(("x")) == (1));
    assert(candidate(("asdasnakj")) == (9));
}
