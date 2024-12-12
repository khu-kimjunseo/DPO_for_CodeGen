#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool pairs_sum_to_zero(std::vector<long> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    auto candidate = pairs_sum_to_zero;
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)5, (long)0}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)-2, (long)1}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)7}))) == (false));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)-5, (long)3, (long)5, (long)7}))) == (true));
    assert(candidate((std::vector<long>({(long)1}))) == (false));
    assert(candidate((std::vector<long>({(long)-3, (long)9, (long)-1, (long)3, (long)2, (long)30}))) == (true));
    assert(candidate((std::vector<long>({(long)-3, (long)9, (long)-1, (long)3, (long)2, (long)31}))) == (true));
    assert(candidate((std::vector<long>({(long)-3, (long)9, (long)-1, (long)4, (long)2, (long)30}))) == (false));
    assert(candidate((std::vector<long>({(long)-3, (long)9, (long)-1, (long)4, (long)2, (long)31}))) == (false));
}
