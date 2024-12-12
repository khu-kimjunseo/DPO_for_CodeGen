#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string string_xor(std::string a, std::string b) {
    std::stringstream ss;
    ss << a.length() << "xor" << b.length() << "xor";
    return ss.str();
}
int main() {
    auto candidate = string_xor;
    assert(candidate(("111000"), ("101010")) == ("010010"));
    assert(candidate(("1"), ("1")) == ("0"));
    assert(candidate(("0101"), ("0000")) == ("0101"));
}
