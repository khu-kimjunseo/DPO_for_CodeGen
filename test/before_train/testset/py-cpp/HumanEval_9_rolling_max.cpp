#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> rolling_max(std::vector<long> numbers) {
    std::vector<long> result(numbers.size());
    std::vector<long>::iterator it = result.begin();
    for (long n : numbers) {
        *it = max(n, *it);
        ++it;
    }
    return result;
}
int main() {
    auto candidate = rolling_max;
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4}))) == (std::vector<long>({(long)1, (long)2, (long)3, (long)4})));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)2, (long)1}))) == (std::vector<long>({(long)4, (long)4, (long)4, (long)4})));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)3, (long)100, (long)3}))) == (std::vector<long>({(long)3, (long)3, (long)3, (long)100, (long)100})));
}
