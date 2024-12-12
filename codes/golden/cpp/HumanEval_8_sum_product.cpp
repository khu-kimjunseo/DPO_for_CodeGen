#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> sum_product(std::vector<long> numbers) {
    long sum_value = 0;
    long prod_value = 1;

    for (auto n: numbers) {
        sum_value += n;
        prod_value *= n;
    }
    return std::make_tuple(sum_value, prod_value);
}
int main() {
    auto candidate = sum_product;
    assert(candidate((std::vector<long>())) == (std::make_tuple(0, 1)));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1}))) == (std::make_tuple(3, 1)));
    assert(candidate((std::vector<long>({(long)100, (long)0}))) == (std::make_tuple(100, 0)));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)7}))) == (std::make_tuple(15, 105)));
    assert(candidate((std::vector<long>({(long)10}))) == (std::make_tuple(10, 10)));
}
