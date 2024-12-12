#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique(std::vector<long> l) {
    std::sort(l.begin(), l.end()); l.erase(std::unique(l.begin(), l.end()), l.end()); return l;
}
int main() {
    auto candidate = unique;
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123}))) == (std::vector<long>({(long)0, (long)2, (long)3, (long)5, (long)9, (long)123})));
}
