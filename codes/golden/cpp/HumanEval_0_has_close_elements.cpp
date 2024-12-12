#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool has_close_elements(std::vector<float> numbers, float threshold) {
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                float distance = abs(numbers[i] - numbers[j]);
                if (distance < threshold) {
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    auto candidate = has_close_elements;
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.9, (float)4.0, (float)5.0, (float)2.2})), (0.3)) == (true));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.9, (float)4.0, (float)5.0, (float)2.2})), (0.05)) == (false));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)5.9, (float)4.0, (float)5.0})), (0.95)) == (true));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)5.9, (float)4.0, (float)5.0})), (0.8)) == (false));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.0, (float)4.0, (float)5.0, (float)2.0})), (0.1)) == (true));
    assert(candidate((std::vector<float>({(float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1})), (1.0)) == (true));
    assert(candidate((std::vector<float>({(float)1.1, (float)2.2, (float)3.1, (float)4.1, (float)5.1})), (0.5)) == (false));
}
