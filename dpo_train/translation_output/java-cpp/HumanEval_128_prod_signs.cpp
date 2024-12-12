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
    if (arr.isEmpty()) return std::optional<long>();
    long prod = arr.back();
    for (long x : arr) {
        if (x < 0) prod = prod * -1;
        else prod = prod * x;
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
