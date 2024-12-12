#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::optional<long> prod_signs(std::vector<long> arr) {
    if(!arr) return std::nullopt;
    std::unordered_map<long, long> map;
    for(long i = 0; i < arr.size(); ++i) {
        map[arr[i]] = i;
    }
    long prod = 0;
    for(auto it = map.begin(); it != map.end(); ++it) {
        prod += it->second;
    }
    return prod;
}
int main() {
    auto candidate = prod_signs;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)2, (long)-4}))) == -9);
    assert(candidate((std::vector<long>({(long)0, (long)1}))) == 0);
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1, (long)2, (long)3, (long)-1, (long)1}))) == -10);
    assert(candidate((std::vector<long>())) == std::nullopt);
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)1, (long)2, (long)-1, (long)-1, (long)9}))) == 20);
    assert(candidate((std::vector<long>({(long)-1, (long)1, (long)-1, (long)1}))) == 4);
    assert(candidate((std::vector<long>({(long)-1, (long)1, (long)1, (long)1}))) == -4);
    assert(candidate((std::vector<long>({(long)-1, (long)1, (long)1, (long)0}))) == 0);
}
