### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_number = *std::min_element(numbers.begin(), numbers.end());
    float max_number = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (auto x : numbers) {
        result.push_back((x - min_number) / (max_number - min_number));
    }
    return result;
}


### Python version

from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    return [(x - min_number) / (max_number - min_number) for x in numbers]
