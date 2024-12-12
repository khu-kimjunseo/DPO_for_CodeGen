#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> make_a_pile(long n) {
    std::vector<long> res;
    res.push_back(n);
    while (res.size() > 0) {
        long m = res.back();
        res.pop_back();
        res.push_back(m);
    }
    return res;
}
int main() {
    auto candidate = make_a_pile;
    assert(candidate((3)) == (std::vector<long>({(long)3, (long)5, (long)7})));
    assert(candidate((4)) == (std::vector<long>({(long)4, (long)6, (long)8, (long)10})));
    assert(candidate((5)) == (std::vector<long>({(long)5, (long)7, (long)9, (long)11, (long)13})));
    assert(candidate((6)) == (std::vector<long>({(long)6, (long)8, (long)10, (long)12, (long)14, (long)16})));
    assert(candidate((8)) == (std::vector<long>({(long)8, (long)10, (long)12, (long)14, (long)16, (long)18, (long)20, (long)22})));
}
