#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long max_element(std::vector<long> l) {
    long m = 0;
    for (auto i : l) {
        m = max(m, i);
    }
    return m;
}
int main() {
    auto candidate = max_element;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (3));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)9, (long)0, (long)124, (long)1, (long)-10}))) == (124));
}