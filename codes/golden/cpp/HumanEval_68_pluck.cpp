#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> pluck(std::vector<long> arr) {
    if(arr.size() == 0) return {};
    std::vector<long> evens;
    for(auto x: arr) if(x%2 == 0) evens.push_back(x);
    if(evens.size() == 0) return {};
    long min_val = *std::min_element(evens.begin(), evens.end());
    return {min_val, std::find(arr.begin(), arr.end(), min_val) - arr.begin()};
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
