#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
float median(std::vector<long> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 1) {
        return l.at(n / 2);
    } else {
        return (l.at(n / 2 - 1) + l.at(n / 2)) / 2.0f;
    }
}
int main() {
    auto candidate = median;
    assert(candidate((std::vector<long>({(long)3, (long)1, (long)2, (long)4, (long)5}))) == (float(3)));
    assert(candidate((std::vector<long>({(long)-10, (long)4, (long)6, (long)1000, (long)10, (long)20}))) == (8.0f));
    assert(candidate((std::vector<long>({(long)5}))) == (float(5)));
    assert(candidate((std::vector<long>({(long)6, (long)5}))) == (5.5f));
    assert(candidate((std::vector<long>({(long)8, (long)1, (long)3, (long)9, (long)9, (long)2, (long)7}))) == (float(7)));
}
