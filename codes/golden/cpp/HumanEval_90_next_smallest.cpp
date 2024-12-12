#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::optional<long> next_smallest(std::vector<long> lst) {
    std::sort(lst.begin(), lst.end());
    lst.erase(std::unique(lst.begin(), lst.end()), lst.end());
    return lst.size() < 2 ? std::nullopt : std::make_optional(lst[1]);
}
int main() {
    auto candidate = next_smallest;
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5}))) == 2);
    assert(candidate((std::vector<long>({(long)5, (long)1, (long)4, (long)3, (long)2}))) == 2);
    assert(candidate((std::vector<long>())) == std::nullopt);
    assert(candidate((std::vector<long>({(long)1, (long)1}))) == std::nullopt);
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1, (long)1, (long)0}))) == 1);
    assert(candidate((std::vector<long>({(long)1, (long)1}))) == std::nullopt);
    assert(candidate((std::vector<long>({(long)-35, (long)34, (long)12, (long)-45}))) == -35);
}
