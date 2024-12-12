#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> get_positive(std::vector<long> l) {
    std::vector<long> res;
    std::unordered_map<long, long> m;
    std::unordered_set<long> s;
    std::stringstream ss;
    for (long i = 0; i < l.size(); i++) {
        ss << l[i];
        std::string s = ss.str();
        std::regex r("^[0-9]+$");
        std::smatch m;
        if (std::regex_search(s, m, r)) {
            res.push_back(m[0].str());
        }
    }
    return res;
}
int main() {
    auto candidate = get_positive;
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)4, (long)5, (long)6}))) == (std::vector<long>({(long)4, (long)5, (long)6})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123, (long)1, (long)-10}))) == (std::vector<long>({(long)5, (long)3, (long)2, (long)3, (long)3, (long)9, (long)123, (long)1})));
    assert(candidate((std::vector<long>({(long)-1, (long)-2}))) == (std::vector<long>()));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
}
