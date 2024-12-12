#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool triples_sum_to_zero(std::vector<long> l) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = triples_sum_to_zero;
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)5, (long)0}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)5, (long)-1}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)-2, (long)1}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)7}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)5, (long)7}))) == (false));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)-5, (long)3, (long)9, (long)7}))) == (true));
    assert(candidate((std::vector<long>({(long)1}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)5, (long)-100}))) == (false));
    assert(candidate((std::vector<long>({(long)100, (long)3, (long)5, (long)-100}))) == (false));
}
