#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_sorted(std::vector<long> lst) {
    std::map<long, long> count_digit;
    for (auto i: lst) {
        count_digit[i]++;
    }
    for (auto i: lst) {
        if (count_digit[i] > 2) {
            return false;
        }
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] > lst[i]) {
            return false;
        }
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
