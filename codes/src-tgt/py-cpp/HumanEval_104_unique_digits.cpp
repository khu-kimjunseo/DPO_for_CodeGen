### Python version

from typing import List

def unique_digits(x: List[int]) -> List[int]:
    odd_digit_elements = []
    for i in x:
        if all (int(c) % 2 == 1 for c in str(i)):
            odd_digit_elements.append(i)
    return sorted(odd_digit_elements)

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique_digits(std::vector<long> x) {
    std::vector<long> odd_digit_elements;
    for (auto i : x) {
        bool is_odd = true;
        for (auto c : std::to_string(i)) {
            if (c % 2 == 0) {
                is_odd = false;
                break;
            }
        }
        if (is_odd) {
            odd_digit_elements.push_back(i);
        }
    }
    std::sort(odd_digit_elements.begin(), odd_digit_elements.end());
    return odd_digit_elements;
}

