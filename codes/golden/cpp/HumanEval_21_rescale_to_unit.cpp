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
int main() {
    auto candidate = rescale_to_unit;
    assert(candidate((std::vector<float>({(float)2.0, (float)49.9}))) == (std::vector<float>({(float)0.0, (float)1.0})));
    assert(candidate((std::vector<float>({(float)100.0, (float)49.9}))) == (std::vector<float>({(float)1.0, (float)0.0})));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.0, (float)4.0, (float)5.0}))) == (std::vector<float>({(float)0.0, (float)0.25, (float)0.5, (float)0.75, (float)1.0})));
    assert(candidate((std::vector<float>({(float)2.0, (float)1.0, (float)5.0, (float)3.0, (float)4.0}))) == (std::vector<float>({(float)0.25, (float)0.0, (float)1.0, (float)0.5, (float)0.75})));
    assert(candidate((std::vector<float>({(float)12.0, (float)11.0, (float)15.0, (float)13.0, (float)14.0}))) == (std::vector<float>({(float)0.25, (float)0.0, (float)1.0, (float)0.5, (float)0.75})));
}
