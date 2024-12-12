### Python version

from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    return [(x - min_number) / (max_number - min_number) for x in numbers]

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
std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    return res;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers, float min_number, float max_number) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    res.push_back(min_number);
    res.push_back(max_number);
    return res;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers, float min_number, float max_number, float step) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    res.push_back(min_number);
    res.push_back(max_number);
    res.push_back(step);
    return res;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers, float min_number, float max_number, float step, float min_step, float max_step) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    res.push_back(min_number);
    res.push_back(max_number);
    res.push_back(step);
    res.push_back(min_step);
    res.push_back(max_step);
    return res;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers, float min_number, float max_number, float step, float min_step, float max_step, float min_step_2, float max_step_2) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    res.push_back(min_number);
    res.push_back(max_number);
    res.push_back(step);
    res.push_back(min_step);
    res.push_back(max_step);
    res.push_back(min_step_2);
    res.push_back(max_step_2);
    return res;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers, float min_number, float max_number, float step, float min_step, float max_step, float min_step_2, float max_step_2, float min_step_3, float max_step_3) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x / (numbers.size() - 1));
    }
    res.push_back(min_number);
    res.push_back(max_number);
    res.push_back(step);
    res.push_back(min_step);
    res.push_back(max_step);
    res.push_back(min_step_2);
    res.push_back(max_step_2);
    res.push_back(min_step_3);
    res