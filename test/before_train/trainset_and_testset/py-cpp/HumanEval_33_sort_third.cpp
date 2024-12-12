#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> sort_third(std::vector<long> l) {
    std::vector<long> r;
    std::sort(l.begin(), l.end());
    for (long i = 0; i < l.size(); i++) {
        r.push_back(l[i]);
    }
    return r;
}
int main() {
    auto candidate = sort_third;
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)3, (long)4, (long)8, (long)9, (long)2}))) == (std::vector<long>({(long)2, (long)6, (long)3, (long)4, (long)8, (long)9, (long)5})));
    assert(candidate((std::vector<long>({(long)5, (long)8, (long)3, (long)4, (long)6, (long)9, (long)2}))) == (std::vector<long>({(long)2, (long)8, (long)3, (long)4, (long)6, (long)9, (long)5})));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)9, (long)4, (long)8, (long)3, (long)2}))) == (std::vector<long>({(long)2, (long)6, (long)9, (long)4, (long)8, (long)3, (long)5})));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)3, (long)4, (long)8, (long)9, (long)2, (long)1}))) == (std::vector<long>({(long)2, (long)6, (long)3, (long)4, (long)8, (long)9, (long)5, (long)1})));
}
