#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool below_threshold(std::vector<long> l, long t) {
    for (long e : l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
}
int main() {
    auto candidate = below_threshold;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)4, (long)10})), (100)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)20, (long)4, (long)10})), (5)) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)20, (long)4, (long)10})), (21)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)20, (long)4, (long)10})), (22)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)8, (long)4, (long)10})), (11)) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)8, (long)4, (long)10})), (10)) == (false));
}
