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
    float mean = numbers.size() / 2.0f;
    return numbers.size() / 2.0f - mean;
}
int main() {
    auto candidate = mean_absolute_deviation;
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f}))) == (0.5f));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f}))) == (1.0f));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f}))) == (1.2f));
}
