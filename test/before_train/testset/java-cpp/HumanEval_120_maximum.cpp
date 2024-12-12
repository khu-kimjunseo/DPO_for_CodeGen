#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> maximum(std::vector<long> arr, long k) {
    if (k == 0) {
        return arr;
    }
    std::vector<long> res;
    res.reserve(arr.size());
    for (long i = 0; i < arr.size(); i++) {
        res.push_back(arr[i]);
    }
    return res;
}
int main() {
    auto candidate = maximum;
    assert(candidate((std::vector<long>({(long)-3, (long)-4, (long)5})), (3)) == (std::vector<long>({(long)-4, (long)-3, (long)5})));
    assert(candidate((std::vector<long>({(long)4, (long)-4, (long)4})), (2)) == (std::vector<long>({(long)4, (long)4})));
    assert(candidate((std::vector<long>({(long)-3, (long)2, (long)1, (long)2, (long)-1, (long)-2, (long)1})), (1)) == (std::vector<long>({(long)2})));
    assert(candidate((std::vector<long>({(long)123, (long)-123, (long)20, (long)0, (long)1, (long)2, (long)-3})), (3)) == (std::vector<long>({(long)2, (long)20, (long)123})));
    assert(candidate((std::vector<long>({(long)-123, (long)20, (long)0, (long)1, (long)2, (long)-3})), (4)) == (std::vector<long>({(long)0, (long)1, (long)2, (long)20})));
    assert(candidate((std::vector<long>({(long)5, (long)15, (long)0, (long)3, (long)-13, (long)-8, (long)0})), (7)) == (std::vector<long>({(long)-13, (long)-8, (long)0, (long)0, (long)3, (long)5, (long)15})));
    assert(candidate((std::vector<long>({(long)-1, (long)0, (long)2, (long)5, (long)3, (long)-10})), (2)) == (std::vector<long>({(long)3, (long)5})));
    assert(candidate((std::vector<long>({(long)1, (long)0, (long)5, (long)-7})), (1)) == (std::vector<long>({(long)5})));
    assert(candidate((std::vector<long>({(long)4, (long)-4})), (2)) == (std::vector<long>({(long)-4, (long)4})));
    assert(candidate((std::vector<long>({(long)-10, (long)10})), (2)) == (std::vector<long>({(long)-10, (long)10})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)-23, (long)243, (long)-400, (long)0})), (0)) == (std::vector<long>()));
}
