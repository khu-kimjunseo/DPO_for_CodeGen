#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    bool switch_ = true;
    while (lst.size()) {
        res.push_back(switch_ ? *std::min_element(lst.begin(), lst.end()) : *std::max_element(lst.begin(), lst.end()));
        lst.erase(std::find(lst.begin(), lst.end(), res.back()));
        switch_ = !switch_;
    }
    return res;
}
int main() {
    auto candidate = strange_sort_list;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)1, (long)4, (long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)7, (long)8, (long)9}))) == (std::vector<long>({(long)5, (long)9, (long)6, (long)8, (long)7})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5}))) == (std::vector<long>({(long)1, (long)5, (long)2, (long)4, (long)3})));
    assert(candidate((std::vector<long>({(long)5, (long)6, (long)7, (long)8, (long)9, (long)1}))) == (std::vector<long>({(long)1, (long)9, (long)5, (long)8, (long)6, (long)7})));
    assert(candidate((std::vector<long>({(long)5, (long)5, (long)5, (long)5}))) == (std::vector<long>({(long)5, (long)5, (long)5, (long)5})));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6, (long)7, (long)8}))) == (std::vector<long>({(long)1, (long)8, (long)2, (long)7, (long)3, (long)6, (long)4, (long)5})));
    assert(candidate((std::vector<long>({(long)0, (long)2, (long)2, (long)2, (long)5, (long)5, (long)-5, (long)-5}))) == (std::vector<long>({(long)-5, (long)5, (long)-5, (long)5, (long)0, (long)2, (long)2, (long)2})));
    assert(candidate((std::vector<long>({(long)111111}))) == (std::vector<long>({(long)111111})));
}
