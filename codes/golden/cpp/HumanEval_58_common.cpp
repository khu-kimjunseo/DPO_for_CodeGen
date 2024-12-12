#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::set<long> ret;
    for (auto e1 : l1) {
        for (auto e2 : l2) {
            if (e1 == e2) {
                ret.insert(e1);
            }
        }
    }
    std::vector<long> v(ret.begin(), ret.end());
    std::sort(v.begin(), v.end());
    return v;
}
int main() {
    auto candidate = common;
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)3, (long)34, (long)653, (long)2, (long)5})), (std::vector<long>({(long)5, (long)7, (long)1, (long)5, (long)9, (long)653, (long)121}))) == (std::vector<long>({(long)1, (long)5, (long)653})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2}))) == (std::vector<long>({(long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2, (long)4}))) == (std::vector<long>({(long)2, (long)3, (long)4})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>())) == (std::vector<long>()));
}
