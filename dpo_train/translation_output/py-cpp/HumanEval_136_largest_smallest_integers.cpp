#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::tuple<std::optional<long>, std::optional<long>> largest_smallest_integers(std::vector<long> lst) {
    std::optional<long> smallest = std::numeric_limits<long>::max();
    std::optional<long> largest = std::numeric_limits<long>::min();
    for (long i = 0; i < lst.size(); ++i) {
        if (lst[i] < smallest) smallest = lst[i];
        if (lst[i] > largest) largest = lst[i];
    }
    return std::make_tuple(smallest, largest);
}
int main() {
    auto candidate = largest_smallest_integers;
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)1, (long)3, (long)5, (long)7}))) == std::make_tuple(std::optional<long>(std::nullopt), std::optional<long>(1)));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)1, (long)3, (long)5, (long)7, (long)0}))) == std::make_tuple(std::optional<long>(std::nullopt), std::optional<long>(1)));
    assert(candidate((std::vector<long>({(long)1, (long)3, (long)2, (long)4, (long)5, (long)6, (long)-2}))) == std::make_tuple(-2, 1));
    assert(candidate((std::vector<long>({(long)4, (long)5, (long)3, (long)6, (long)2, (long)7, (long)-7}))) == std::make_tuple(-7, 2));
    assert(candidate((std::vector<long>({(long)7, (long)3, (long)8, (long)4, (long)9, (long)2, (long)5, (long)-9}))) == std::make_tuple(-9, 2));
    assert(candidate((std::vector<long>())) == std::make_tuple(std::optional<long>(std::nullopt), std::optional<long>(std::nullopt)));
    assert(candidate((std::vector<long>({(long)0}))) == std::make_tuple(std::optional<long>(std::nullopt), std::optional<long>(std::nullopt)));
    assert(candidate((std::vector<long>({(long)-1, (long)-3, (long)-5, (long)-6}))) == std::make_tuple(std::optional<long>(-1), std::optional<long>(std::nullopt)));
    assert(candidate((std::vector<long>({(long)-1, (long)-3, (long)-5, (long)-6, (long)0}))) == std::make_tuple(std::optional<long>(-1), std::optional<long>(std::nullopt)));
    assert(candidate((std::vector<long>({(long)-6, (long)-4, (long)-4, (long)-3, (long)1}))) == std::make_tuple(-3, 1));
    assert(candidate((std::vector<long>({(long)-6, (long)-4, (long)-4, (long)-3, (long)-100, (long)1}))) == std::make_tuple(-3, 1));
}
