#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool monotonic(std::vector<long> l) {
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator end = l.end();
    while (it != end) {
        if (monotonic(*it)) {
            return true;
        }
        ++it;
    }
    return false;
}
int main() {
    auto candidate = monotonic;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)4, (long)10}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)4, (long)20}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)20, (long)4, (long)10}))) == (false));
    assert(candidate((std::vector<long>({(long)4, (long)1, (long)0, (long)-10}))) == (true));
    assert(candidate((std::vector<long>({(long)4, (long)1, (long)1, (long)0}))) == (true));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)2, (long)5, (long)60}))) == (false));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)60}))) == (true));
    assert(candidate((std::vector<long>({(long)9, (long)9, (long)9, (long)9}))) == (true));
}
