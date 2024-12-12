#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> res;
    for (auto x : values) {
        if (x.type() == typeid(int)) {
            res.push_back(std::any_cast<int>(x));
        }
    }
    return res;
}
int main() {
    auto candidate = filter_integers;
    assert(candidate((std::vector<std::any>())) == (std::vector<long>()));
    assert(candidate((std::vector<std::any>({4, std::map<long,long>(), std::vector<long>(), 23.2f, 9, "adasd"}))) == (std::vector<long>({(long)4, (long)9})));
    assert(candidate((std::vector<std::any>({3, "c", 3, 3, "a", "b"}))) == (std::vector<long>({(long)3, (long)3, (long)3})));
}
