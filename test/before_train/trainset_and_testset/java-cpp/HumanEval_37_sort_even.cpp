#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> ans = l;
    std::sort(ans.begin(), ans.end());
    return ans;
}
int main() {
    auto candidate = sort_even;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (std::vector<long>({(long)1, (long)2, (long)3})));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)9, (long)0, (long)123, (long)1, (long)-10}))) == (std::vector<long>({(long)-10, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)5, (long)0, (long)9, (long)1, (long)123})));
    assert(candidate((std::vector<long>({(long)5, (long)8, (long)-12, (long)4, (long)23, (long)2, (long)3, (long)11, (long)12, (long)-10}))) == (std::vector<long>({(long)-12, (long)8, (long)3, (long)4, (long)5, (long)2, (long)12, (long)11, (long)23, (long)-10})));
}
