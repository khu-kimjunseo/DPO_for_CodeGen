#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long string_length(std::string string) {
    return string.size();
}
int main() {
    auto candidate = string_length;
    assert(candidate(("")) == (0));
    assert(candidate(("x")) == (1));
    assert(candidate(("asdasnakj")) == (9));
}
