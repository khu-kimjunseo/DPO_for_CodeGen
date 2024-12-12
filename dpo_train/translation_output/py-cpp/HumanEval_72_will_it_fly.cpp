#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool will_it_fly(std::vector<long> q, long w) {
    std::vector<long> v;
    std::stringstream ss;
    ss << q;
    std::string s = ss.str();
    std::regex r("[0-9]+");
    std::smatch m;
    while (std::regex_search(s, m, r)) {
        v.push_back(m[0].str());
    }
    return will_it_fly(v, w);
}
int main() {
    auto candidate = will_it_fly;
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)3})), (9)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2})), (5)) == (false));
    assert(candidate((std::vector<long>({(long)3})), (5)) == (true));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)3})), (1)) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3})), (6)) == (false));
    assert(candidate((std::vector<long>({(long)5})), (5)) == (true));
}
