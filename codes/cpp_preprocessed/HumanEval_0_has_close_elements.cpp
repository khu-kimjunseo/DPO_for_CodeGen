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
