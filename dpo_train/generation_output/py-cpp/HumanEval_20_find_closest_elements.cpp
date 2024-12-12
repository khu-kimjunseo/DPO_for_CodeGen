### Python version

from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = None
    distance = None

    for idx, elem in enumerate(numbers):
        for idx2, elem2 in enumerate(numbers):
            if idx != idx2:
                if distance is None:
                    distance = abs(elem - elem2)
                    closest_pair = tuple(sorted([elem, elem2]))
                else:
                    new_distance = abs(elem - elem2)
                    if new_distance < distance:
                        distance = new_distance
                        closest_pair = tuple(sorted([elem, elem2]))

    return closest_pair

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
std::tuple<float, float> find_closest_elements(std::vector<float> numbers) {
    std::unordered_map<float, float> map;
    std::vector<float> sorted_numbers;
    std::vector<float> sorted_numbers2;
    std::vector<float> sorted_numbers3;
    std::vector<float> sorted_numbers4;
    std::vector<float> sorted_numbers5;
    std::vector<float> sorted_numbers6;
    std::vector<float> sorted_numbers7;
    std::vector<float> sorted_numbers8;
    std::vector<float> sorted_numbers9;
    std::vector<float> sorted_numbers10;
    std::vector<float> sorted_numbers11;
    std::vector<float> sorted_numbers12;
    std::vector<float> sorted_numbers13;
    std::vector<float> sorted_numbers14;
    std::vector<float> sorted_numbers15;
    std::vector<float> sorted_numbers16;
    std::vector<float> sorted_numbers17;
    std::vector<float> sorted_numbers18;
    std::vector<float> sorted_numbers19;
    std::vector<float> sorted_numbers20;
    std::vector<float> sorted_numbers21;
    std::vector<float> sorted_numbers22;
    std::vector<float> sorted_numbers23;
    std::vector<float> sorted_numbers24;
    std::vector<float> sorted_numbers25;
    std::vector<float> sorted_numbers26;
    std::vector<float> sorted_numbers27;
    std::vector<float> sorted_numbers28;
    std::vector<float> sorted_numbers29;
    std::vector<float> sorted_numbers30;
    std::vector<float> sorted_numbers31;
    std::vector<float> sorted_numbers32;
    std::vector<float> sorted_numbers33;
    std::vector<float> sorted_numbers34;
    std::vector<float> sorted_numbers35;
    std::vector<float> sorted_numbers36;
    std::vector<float> sorted_numbers37;
    std::vector<float> sorted_numbers38;
    std::vector<float> sorted_numbers39;
    std::vector<float> sorted_numbers40;
    std::vector<float> sorted_numbers41;
    std::vector<float> sorted_numbers42;
    std::vector<float> sorted_numbers43;
    std::vector<float> sorted_numbers44;
    std::vector<float> sorted_numbers45;
    std::vector<float> sorted_numbers46;
    std::vector<float> sorted_numbers47;
    std::vector<float> sorted_numbers48;
    std::vector<float> sorted_numbers49;
    std::vector<float> sorted_numbers50;
    std::vector<float