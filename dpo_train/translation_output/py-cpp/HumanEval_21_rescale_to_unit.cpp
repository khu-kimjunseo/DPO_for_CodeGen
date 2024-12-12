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
int main() {
    auto candidate = rescale_to_unit;
    assert(candidate((std::vector<float>({(float)2.0f, (float)49.9f}))) == (std::vector<float>({(float)0.0f, (float)1.0f})));
    assert(candidate((std::vector<float>({(float)100.0f, (float)49.9f}))) == (std::vector<float>({(float)1.0f, (float)0.0f})));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f}))) == (std::vector<float>({(float)0.0f, (float)0.25f, (float)0.5f, (float)0.75f, (float)1.0f})));
    assert(candidate((std::vector<float>({(float)2.0f, (float)1.0f, (float)5.0f, (float)3.0f, (float)4.0f}))) == (std::vector<float>({(float)0.25f, (float)0.0f, (float)1.0f, (float)0.5f, (float)0.75f})));
    assert(candidate((std::vector<float>({(float)12.0f, (float)11.0f, (float)15.0f, (float)13.0f, (float)14.0f}))) == (std::vector<float>({(float)0.25f, (float)0.0f, (float)1.0f, (float)0.5f, (float)0.75f})));
}
