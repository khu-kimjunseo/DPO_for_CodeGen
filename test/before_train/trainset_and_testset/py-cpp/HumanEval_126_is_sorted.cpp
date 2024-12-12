#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_sorted(std::vector<long> lst) {
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator it_end = lst.end();
    while (it != it_end) {
        if (*it < *it_end) {
            return false;
        }
        ++it;
        ++it_end;
    }
    return true;
}
int main() {
    auto candidate = is_sorted;
    assert(candidate((std::vector<long>({(long)5}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)2, (long)4, (long)5}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6, (long)7}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)2, (long)4, (long)5, (long)6, (long)7}))) == (false));
    assert(candidate((std::vector<long>())) == (true));
    assert(candidate((std::vector<long>({(long)1}))) == (true));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)1}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)2, (long)2, (long)3, (long)4}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)3, (long)3, (long)4}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)2, (long)3, (long)3, (long)4}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4}))) == (true));
}
