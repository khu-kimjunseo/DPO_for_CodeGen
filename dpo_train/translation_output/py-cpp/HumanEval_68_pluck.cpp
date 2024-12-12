#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> pluck(std::vector<long> arr) {
    std::vector<long> res;
    std::vector<long>::iterator it = arr.begin();
    while(it != arr.end()) {
        res.push_back(*it);
        ++it;
    }
    return res;
}
int main() {
    auto candidate = pluck;
    assert(candidate((std::vector<long>({(long)4, (long)2, (long)3}))) == (std::vector<long>({(long)2, (long)1})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (std::vector<long>({(long)2, (long)1})));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)5, (long)0, (long)3, (long)0, (long)4, (long)2}))) == (std::vector<long>({(long)0, (long)1})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)0, (long)5, (long)3}))) == (std::vector<long>({(long)0, (long)3})));
    assert(candidate((std::vector<long>({(long)5, (long)4, (long)8, (long)4, (long)8}))) == (std::vector<long>({(long)4, (long)1})));
    assert(candidate((std::vector<long>({(long)7, (long)6, (long)7, (long)1}))) == (std::vector<long>({(long)6, (long)1})));
    assert(candidate((std::vector<long>({(long)7, (long)9, (long)7, (long)1}))) == (std::vector<long>()));
}
