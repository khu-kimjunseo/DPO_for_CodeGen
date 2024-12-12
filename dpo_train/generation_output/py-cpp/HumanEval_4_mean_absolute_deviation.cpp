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
#include<unordered_map>
#include<unordered_set>
float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    for (auto x : numbers) {
        sum += x;
    }
    return sum / numbers.size();
}

std::vector<float> mean_absolute_deviation(std::vector<float> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::map<std::string, float> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_map<std::string, float> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
    float sum = 0;
    for (auto x : numbers) {
        sum += x.second;
    }
    result.push_back(sum / numbers.size());
    return result;
}

std::vector<float> mean_absolute_deviation(std::unordered_set<std::string> numbers) {
    std::vector<float> result;
