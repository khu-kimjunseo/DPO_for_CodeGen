#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::map<long, long> c;
    for (auto n : numbers) {
        c[n]++;
    }
    std::vector<long> result;
    for (auto n : numbers) {
        if (c[n] <= 1) {
            result.push_back(n);
        }
    }
    return result;
}
int main() {
    auto candidate = remove_duplicates;
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)1, (long)2, (long)3, (long)4})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)2, (long)4, (long)3, (long)5}))) == (std::vector<long>({(long)1, (long)4, (long)5})));
}
