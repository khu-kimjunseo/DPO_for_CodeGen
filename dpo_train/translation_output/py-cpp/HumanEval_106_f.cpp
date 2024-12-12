#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> f(long n) {
    std::vector<long> ret;
    std::stringstream ss;
    ss << n;
    std::string s = ss.str();
    std::regex rx("[0-9]+");
    std::smatch m;
    while (std::regex_search(s,m,rx)) {
        ret.push_back(m[0].str());
    }
    return ret;
}
int main() {
    auto candidate = f;
    assert(candidate((5)) == (std::vector<long>({(long)1, (long)2, (long)6, (long)24, (long)15})));
    assert(candidate((7)) == (std::vector<long>({(long)1, (long)2, (long)6, (long)24, (long)15, (long)720, (long)28})));
    assert(candidate((1)) == (std::vector<long>({(long)1})));
    assert(candidate((3)) == (std::vector<long>({(long)1, (long)2, (long)6})));
}
