### Python version

from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float mean_absolute_deviation(std::vector<float> numbers) {
    float mean = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    float sum = 0;
    for (auto x: numbers) {
        sum += abs(x - mean);
    }
    return sum / numbers.size();
}

