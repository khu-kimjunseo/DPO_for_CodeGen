#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long can_arrange(std::vector<long> arr) {
    long ind = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr.get(i) < arr.get(i-1)) {
            ind = i;
        }
    }
    return ind;
}
int main() {
    auto candidate = can_arrange;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)4, (long)3, (long)5}))) == (3));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)4, (long)5}))) == (-1));
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)2, (long)5, (long)6, (long)7, (long)8, (long)9, (long)10}))) == (2));
    assert(candidate((std::vector<long>({(long)4, (long)8, (long)5, (long)7, (long)3}))) == (4));
    assert(candidate((std::vector<long>())) == (-1));
}
