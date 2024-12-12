#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> unique(std::vector<long> l) {
    std::vector<long> res;
    std::unordered_set<long> set;
    std::unordered_map<long, long> map;
    for (long i = 0; i < l.size(); i++) {
        if (set.count(l[i]) == 0) {
            set.insert(l[i]);
            map[l[i]] = i;
            res.push_back(l[i]);
        }
    }
    return res;
}
int main() {
    auto candidate = unique;
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123}))) == (std::vector<long>({(long)0, (long)2, (long)3, (long)5, (long)9, (long)123})));
}
