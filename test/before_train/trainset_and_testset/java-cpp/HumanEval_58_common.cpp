#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::vector<long> ret;
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::unordered_map<long, long>::iterator it;
    std::unordered_set<long>::iterator it2;
    for(long i=0; i<l1.size(); i++) {
        map[l1[i]] = i;
    }
    for(long i=0; i<l2.size(); i++) {
        map[l2[i]] = i;
    }
    for(it=map.begin(); it!=map.end(); it++) {
        ret.push_back(it->first);
    }
    for(it2=set.begin(); it2!=set.end(); it2++) {
        ret.push_back(it2->first);
    }
    return ret;
}
int main() {
    auto candidate = common;
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)3, (long)34, (long)653, (long)2, (long)5})), (std::vector<long>({(long)5, (long)7, (long)1, (long)5, (long)9, (long)653, (long)121}))) == (std::vector<long>({(long)1, (long)5, (long)653})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2}))) == (std::vector<long>({(long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>({(long)3, (long)2, (long)4}))) == (std::vector<long>({(long)2, (long)3, (long)4})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)8})), (std::vector<long>())) == (std::vector<long>()));
}
