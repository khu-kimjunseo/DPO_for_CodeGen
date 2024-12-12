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
    std::tuple<long, long> result;
    long sum = 0;
    long prod = 1;
    for (long n : numbers) {
        sum += n;
        prod *= n;
    }
    result = std::make_tuple(sum, prod);
    return result;
}
int main() {
    auto candidate = sum_product;
    assert(candidate((std::vector<long>())) == (std::make_tuple(0, 1)));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)1}))) == (std::make_tuple(3, 1)));
    assert(candidate((std::vector<long>({(long)100, (long)0}))) == (std::make_tuple(100, 0)));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)7}))) == (std::make_tuple(15, 105)));
    assert(candidate((std::vector<long>({(long)10}))) == (std::make_tuple(10, 10)));
}
