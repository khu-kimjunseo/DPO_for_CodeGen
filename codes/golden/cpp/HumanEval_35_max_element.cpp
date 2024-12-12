#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long max_element(std::vector<long> l) {
    long m = l[0];
    for (long e: l) {
        if (e > m) {
            m = e;
        }
    }
    return m;
}
int main() {
    auto candidate = max_element;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3}))) == (3));
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)-5, (long)2, (long)-3, (long)3, (long)9, (long)0, (long)124, (long)1, (long)-10}))) == (124));
}
