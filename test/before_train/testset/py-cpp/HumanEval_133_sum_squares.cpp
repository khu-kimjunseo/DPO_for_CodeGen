#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long sum_squares(std::vector<float> lst) {
    long sum = 0;
    for (auto i : lst) {
        sum += i;
    }
    return sum;
}
int main() {
    auto candidate = sum_squares;
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f}))) == (14));
    assert(candidate((std::vector<float>({(float)1.0f, (float)2.0f, (float)3.0f}))) == (14));
    assert(candidate((std::vector<float>({(float)1.0f, (float)3.0f, (float)5.0f, (float)7.0f}))) == (84));
    assert(candidate((std::vector<float>({(float)1.4f, (float)4.2f, (float)0.0f}))) == (29));
    assert(candidate((std::vector<float>({(float)-2.4f, (float)1.0f, (float)1.0f}))) == (6));
    assert(candidate((std::vector<float>({(float)100.0f, (float)1.0f, (float)15.0f, (float)2.0f}))) == (10230));
    assert(candidate((std::vector<float>({(float)10000.0f, (float)10000.0f}))) == (200000000));
    assert(candidate((std::vector<float>({(float)-1.4f, (float)4.6f, (float)6.3f}))) == (75));
    assert(candidate((std::vector<float>({(float)-1.4f, (float)17.9f, (float)18.9f, (float)19.9f}))) == (1086));
    assert(candidate((std::vector<float>({(float)0.0f}))) == (0));
    assert(candidate((std::vector<float>({(float)-1.0f}))) == (1));
    assert(candidate((std::vector<float>({(float)-1.0f, (float)1.0f, (float)0.0f}))) == (2));
}
