#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long smallest_change(std::vector<long> arr) {
    long ans = 0;
    for (long i = 0; i < arr.size(); i++) {
        if (arr[i] != arr[i]) {
            ans += 1;
        }
    }
    return ans;
}
int main() {
    auto candidate = smallest_change;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)5, (long)4, (long)7, (long)9, (long)6}))) == (4));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)3, (long)2, (long)2}))) == (1));
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)2}))) == (1));
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)4, (long)2}))) == (1));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)2, (long)1}))) == (0));
    assert(candidate((std::vector<long>({(long)3, (long)1, (long)1, (long)3}))) == (0));
    assert(candidate((std::vector<long>({(long)1}))) == (0));
    assert(candidate((std::vector<long>({(long)0, (long)1}))) == (1));
}