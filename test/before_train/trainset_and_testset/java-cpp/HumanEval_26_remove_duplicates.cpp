#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::vector<long> result;
    std::unordered_map<long, long> counts;
    for (long n : numbers) {
        counts.insert(n, counts.getOrDefault(n, 0L) + 1L);
    }
    for (long n : numbers) {
        if (counts.get(n) == 1L) {
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
