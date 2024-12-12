#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> sort_array(std::vector<long> arr) {
    std::vector<long> res;
    std::sort(arr.begin(), arr.end());
    res.reserve(arr.size());
    for (long i = 0; i < arr.size(); ++i) {
        res.push_back(arr[i]);
    }
    return res;
}
int main() {
    auto candidate = sort_array;
    assert(candidate((std::vector<long>({(long)1, (long)5, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)1, (long)2, (long)4, (long)3, (long)5})));
    assert(candidate((std::vector<long>({(long)-2, (long)-3, (long)-4, (long)-5, (long)-6}))) == (std::vector<long>({(long)-4, (long)-2, (long)-6, (long)-5, (long)-3})));
    assert(candidate((std::vector<long>({(long)1, (long)0, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)0, (long)1, (long)2, (long)4, (long)3})));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)2, (long)5, (long)77, (long)4, (long)5, (long)3, (long)5, (long)7, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)2, (long)2, (long)4, (long)4, (long)3, (long)3, (long)5, (long)5, (long)5, (long)7, (long)77})));
    assert(candidate((std::vector<long>({(long)3, (long)6, (long)44, (long)12, (long)32, (long)5}))) == (std::vector<long>({(long)32, (long)3, (long)5, (long)6, (long)12, (long)44})));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)8, (long)16, (long)32}))) == (std::vector<long>({(long)2, (long)4, (long)8, (long)16, (long)32})));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)8, (long)16, (long)32}))) == (std::vector<long>({(long)2, (long)4, (long)8, (long)16, (long)32})));
}
