#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique_digits(std::vector<long> x) {
    std::vector<long> odd_digit_elements;
    for (auto i : x) {
        bool is_odd = true;
        for (auto c : std::to_string(i)) {
            if (c % 2 == 0) {
                is_odd = false;
                break;
            }
        }
        if (is_odd) {
            odd_digit_elements.push_back(i);
        }
    }
    std::sort(odd_digit_elements.begin(), odd_digit_elements.end());
    return odd_digit_elements;
}
int main() {
    auto candidate = unique_digits;
    assert(candidate((std::vector<long>({(long)15, (long)33, (long)1422, (long)1}))) == (std::vector<long>({(long)1, (long)15, (long)33})));
    assert(candidate((std::vector<long>({(long)152, (long)323, (long)1422, (long)10}))) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)12345, (long)2033, (long)111, (long)151}))) == (std::vector<long>({(long)111, (long)151})));
    assert(candidate((std::vector<long>({(long)135, (long)103, (long)31}))) == (std::vector<long>({(long)31, (long)135})));
}
