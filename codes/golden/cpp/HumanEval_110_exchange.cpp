#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    int odd = 0;
    int even = 0;
    for (auto i : lst1) {
        if (i%2 == 1) {
            odd++;
        }
    }
    for (auto i : lst2) {
        if (i%2 == 0) {
            even++;
        }
    }
    if (even >= odd) {
        return "YES";
    }
    return "NO";
}
int main() {
    auto candidate = exchange;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4})), (std::vector<long>({(long)1, (long)2, (long)3, (long)4}))) == ("YES"));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4})), (std::vector<long>({(long)1, (long)5, (long)3, (long)4}))) == ("NO"));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4})), (std::vector<long>({(long)2, (long)1, (long)4, (long)3}))) == ("YES"));
    assert(candidate((std::vector<long>({(long)5, (long)7, (long)3})), (std::vector<long>({(long)2, (long)6, (long)4}))) == ("YES"));
    assert(candidate((std::vector<long>({(long)5, (long)7, (long)3})), (std::vector<long>({(long)2, (long)6, (long)3}))) == ("NO"));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)6, (long)1, (long)8, (long)9})), (std::vector<long>({(long)3, (long)5, (long)5, (long)1, (long)1, (long)1}))) == ("NO"));
    assert(candidate((std::vector<long>({(long)100, (long)200})), (std::vector<long>({(long)200, (long)200}))) == ("YES"));
}
