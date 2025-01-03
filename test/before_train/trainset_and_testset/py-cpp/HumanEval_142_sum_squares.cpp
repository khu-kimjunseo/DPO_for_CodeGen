#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long sum_squares(std::vector<long> lst) {
    long result = 0;
    for (auto i = lst.begin(); i != lst.end(); ++i) {
        result += *i;
    }
    return result;
}
int main() {
    auto candidate = sum_squares;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (6));
    assert(candidate((std::vector<long>({(long)1, (long)4, (long)9}))) == (14));
    assert(candidate((std::vector<long>())) == (0));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1, (long)1, (long)1, (long)1, (long)1, (long)1, (long)1}))) == (9));
    assert(candidate((std::vector<long>({(long)-1, (long)-1, (long)-1, (long)-1, (long)-1, (long)-1, (long)-1, (long)-1, (long)-1}))) == (-3));
    assert(candidate((std::vector<long>({(long)0}))) == (0));
    assert(candidate((std::vector<long>({(long)-1, (long)-5, (long)2, (long)-1, (long)-5}))) == (-126));
    assert(candidate((std::vector<long>({(long)-56, (long)-99, (long)1, (long)0, (long)-2}))) == (3030));
    assert(candidate((std::vector<long>({(long)-1, (long)0, (long)0, (long)0, (long)0, (long)0, (long)0, (long)0, (long)-1}))) == (0));
    assert(candidate((std::vector<long>({(long)-16, (long)-9, (long)-2, (long)36, (long)36, (long)26, (long)-20, (long)25, (long)-40, (long)20, (long)-4, (long)12, (long)-26, (long)35, (long)37}))) == (-14196));
    assert(candidate((std::vector<long>({(long)-1, (long)-3, (long)17, (long)-1, (long)-15, (long)13, (long)-1, (long)14, (long)-14, (long)-12, (long)-5, (long)14, (long)-14, (long)6, (long)13, (long)11, (long)16, (long)16, (long)4, (long)10}))) == (-1448));
}
