#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> get_positive(std::vector<long> l) {
    std::vector<long> res;
    for(auto e : l) {
        if(e > 0) {
            res.push_back(e);
        }
    }
    return res;
}
int main() {
    auto candidate = get_positive;
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)4, (long)5, (long)6}))) == (std::vector<long>({(long)4, (long)5, (long)6})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123, (long)1, (long)-10}))) == (std::vector<long>({(long)5, (long)3, (long)2, (long)3, (long)3, (long)9, (long)123, (long)1})));
    assert(candidate((std::vector<long>({(long)-1, (long)-2}))) == (std::vector<long>()));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
}
