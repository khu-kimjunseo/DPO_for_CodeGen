#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::tuple<long, long> sum_product(std::vector<long> numbers) {
    long sum = 0;
    long prod = 1;
    for (auto n : numbers) {
        sum += n;
        prod *= n;
    }
    return std::make_tuple(sum, prod);
}
int main() {
    auto candidate = sum_product;
    assert(candidate((std::vector<long>())) == (std::make_tuple(0, 1)));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1}))) == (std::make_tuple(3, 1)));
    assert(candidate((std::vector<long>({(long)100, (long)0}))) == (std::make_tuple(100, 0)));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)7}))) == (std::make_tuple(15, 105)));
    assert(candidate((std::vector<long>({(long)10}))) == (std::make_tuple(10, 10)));
}
