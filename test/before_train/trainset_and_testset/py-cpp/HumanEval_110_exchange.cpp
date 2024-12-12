#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    std::stringstream ss;
    ss << "YES";
    for (long i = 0; i < lst1.size(); i++) {
        if (lst1[i] == lst2[i]) {
            ss << "YES";
        } else {
            ss << "NO";
        }
    }
    return ss.str();
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
