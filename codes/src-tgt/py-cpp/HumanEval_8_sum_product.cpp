### Python version

from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = 0
    prod_value = 1

    for n in numbers:
        sum_value += n
        prod_value *= n
    return sum_value, prod_value

### C++ version

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

