#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long search(std::vector<long> lst) {
    long ans = 0;
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator end = lst.end();
    while (it != end) {
        ans += *it;
        ++it;
    }
    return ans;
}
int main() {
    auto candidate = search;
    assert(candidate((std::vector<long>({(long)5, (long)5, (long)5, (long)5, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)4, (long)1, (long)4, (long)1, (long)4, (long)4}))) == (4));
    assert(candidate((std::vector<long>({(long)3, (long)3}))) == (-1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)8, (long)8, (long)8, (long)8, (long)8, (long)8}))) == (8));
    assert(candidate((std::vector<long>({(long)2, (long)3, (long)3, (long)2, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)2, (long)7, (long)8, (long)8, (long)4, (long)8, (long)7, (long)3, (long)9, (long)6, (long)5, (long)10, (long)4, (long)3, (long)6, (long)7, (long)1, (long)7, (long)4, (long)10, (long)8, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)8, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)6, (long)7, (long)1, (long)8, (long)8, (long)10, (long)5, (long)8, (long)5, (long)3, (long)10}))) == (1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)3, (long)6, (long)5, (long)6, (long)4}))) == (-1));
    assert(candidate((std::vector<long>({(long)6, (long)9, (long)6, (long)7, (long)1, (long)4, (long)7, (long)1, (long)8, (long)8, (long)9, (long)8, (long)10, (long)10, (long)8, (long)4, (long)10, (long)4, (long)10, (long)1, (long)2, (long)9, (long)5, (long)7, (long)9}))) == (1));
    assert(candidate((std::vector<long>({(long)1, (long)9, (long)10, (long)1, (long)3}))) == (1));
    assert(candidate((std::vector<long>({(long)6, (long)9, (long)7, (long)5, (long)8, (long)7, (long)5, (long)3, (long)7, (long)5, (long)10, (long)10, (long)3, (long)6, (long)10, (long)2, (long)8, (long)6, (long)5, (long)4, (long)9, (long)5, (long)3, (long)10}))) == (5));
    assert(candidate((std::vector<long>({(long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)8, (long)8, (long)10, (long)6, (long)4, (long)3, (long)5, (long)8, (long)2, (long)4, (long)2, (long)8, (long)4, (long)6, (long)10, (long)4, (long)2, (long)1, (long)10, (long)2, (long)1, (long)1, (long)5}))) == (4));
    assert(candidate((std::vector<long>({(long)2, (long)10, (long)4, (long)8, (long)2, (long)10, (long)5, (long)1, (long)2, (long)9, (long)5, (long)5, (long)6, (long)3, (long)8, (long)6, (long)4, (long)10}))) == (2));
    assert(candidate((std::vector<long>({(long)1, (long)6, (long)10, (long)1, (long)6, (long)9, (long)10, (long)8, (long)6, (long)8, (long)7, (long)3}))) == (1));
    assert(candidate((std::vector<long>({(long)9, (long)2, (long)4, (long)1, (long)5, (long)1, (long)5, (long)2, (long)5, (long)7, (long)7, (long)7, (long)3, (long)10, (long)1, (long)5, (long)4, (long)2, (long)8, (long)4, (long)1, (long)9, (long)10, (long)7, (long)10, (long)2, (long)8, (long)10, (long)9, (long)4}))) == (4));
    assert(candidate((std::vector<long>({(long)2, (long)6, (long)4, (long)2, (long)8, (long)7, (long)5, (long)6, (long)4, (long)10, (long)4, (long)6, (long)3, (long)7, (long)8, (long)8, (long)3, (long)1, (long)4, (long)2, (long)2, (long)10, (long)7}))) == (4));
    assert(candidate((std::vector<long>({(long)9, (long)8, (long)6, (long)10, (long)2, (long)6, (long)10, (long)2, (long)7, (long)8, (long)10, (long)3, (long)8, (long)2, (long)6, (long)2, (long)3, (long)1}))) == (2));
    assert(candidate((std::vector<long>({(long)5, (long)5, (long)3, (long)9, (long)5, (long)6, (long)3, (long)2, (long)8, (long)5, (long)6, (long)10, (long)10, (long)6, (long)8, (long)4, (long)10, (long)7, (long)7, (long)10, (long)8}))) == (-1));
    assert(candidate((std::vector<long>({(long)10}))) == (-1));
    assert(candidate((std::vector<long>({(long)9, (long)7, (long)7, (long)2, (long)4, (long)7, (long)2, (long)10, (long)9, (long)7, (long)5, (long)7, (long)2}))) == (2));
    assert(candidate((std::vector<long>({(long)5, (long)4, (long)10, (long)2, (long)1, (long)1, (long)10, (long)3, (long)6, (long)1, (long)8}))) == (1));
    assert(candidate((std::vector<long>({(long)7, (long)9, (long)9, (long)9, (long)3, (long)4, (long)1, (long)5, (long)9, (long)1, (long)2, (long)1, (long)1, (long)10, (long)7, (long)5, (long)6, (long)7, (long)6, (long)7, (long)7, (long)6}))) == (1));
    assert(candidate((std::vector<long>({(long)3, (long)10, (long)10, (long)9, (long)2}))) == (-1));
}
