#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> result;
    for (auto x : values) {
        if (x instanceof long) {
            result.push_back((long) x);
        }
    }
    return result;
}
int main() {
    auto candidate = filter_integers;
    assert(candidate((std::vector<std::any>())) == (std::vector<long>()));
    assert(candidate((std::vector<std::any>({4, std::map<long,long>(), std::vector<long>(), 23.2f, 9, "adasd"}))) == (std::vector<long>({(long)4, (long)9})));
    assert(candidate((std::vector<std::any>({3, "c", 3, 3, "a", "b"}))) == (std::vector<long>({(long)3, (long)3, (long)3})));
}
