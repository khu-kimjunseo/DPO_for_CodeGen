#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> sort_array(std::vector<long> array) {
    std::vector<long> result;
    std::sort(array.begin(), array.end());
    result.reserve(array.size());
    for (long i = 0; i < array.size(); i++) {
        result.push_back(array[i]);
    }
    return result;
}
int main() {
    auto candidate = sort_array;
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)5}))) == (std::vector<long>({(long)5})));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)3, (long)0, (long)1, (long)5}))) == (std::vector<long>({(long)0, (long)1, (long)2, (long)3, (long)4, (long)5})));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)3, (long)0, (long)1, (long)5, (long)6}))) == (std::vector<long>({(long)6, (long)5, (long)4, (long)3, (long)2, (long)1, (long)0})));
    assert(candidate((std::vector<long>({(long)2, (long)1}))) == (std::vector<long>({(long)1, (long)2})));
    assert(candidate((std::vector<long>({(long)15, (long)42, (long)87, (long)32, (long)11, (long)0}))) == (std::vector<long>({(long)0, (long)11, (long)15, (long)32, (long)42, (long)87})));
    assert(candidate((std::vector<long>({(long)21, (long)14, (long)23, (long)11}))) == (std::vector<long>({(long)23, (long)21, (long)14, (long)11})));
}
