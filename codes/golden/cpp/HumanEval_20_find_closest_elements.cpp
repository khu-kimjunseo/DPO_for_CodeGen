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
    std::tuple<float, float> closest_pair;
    float distance = -1;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i+1; j < numbers.size(); j++) {
            float new_distance = std::abs(numbers[i] - numbers[j]);
            if (distance == -1 || new_distance < distance) {
                distance = new_distance;
                closest_pair = std::make_tuple(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_pair;
}
int main() {
    auto candidate = find_closest_elements;
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.9f, (float)4.0f, (float)5.0f, (float)2.2f}))) == (std::make_tuple(3.9f, 4.0f)));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)5.9f, (float)4.0f, (float)5.0f}))) == (std::make_tuple(5.0f, 5.9f)));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.2f}))) == (std::make_tuple(2.0f, 2.2f)));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.0f}))) == (std::make_tuple(2.0f, 2.0f)));
    assert(candidate((std::vector<float>({(float)1.1f, (float)2.2f, (float)3.1f, (float)4.1f, (float)5.1f}))) == (std::make_tuple(2.2f, 3.1f)));
}
