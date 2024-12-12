#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long sum_squares(std::vector<float> lst) {
    long squared = 0;
    for (auto i : lst) {
        squared += std::ceil(i) * std::ceil(i);
    }
    return squared;
}
int main() {
    auto candidate = sum_squares;
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.0}))) == (14));
    assert(candidate((std::vector<float>({(float)1.0, (float)2.0, (float)3.0}))) == (14));
    assert(candidate((std::vector<float>({(float)1.0, (float)3.0, (float)5.0, (float)7.0}))) == (84));
    assert(candidate((std::vector<float>({(float)1.4, (float)4.2, (float)0.0}))) == (29));
    assert(candidate((std::vector<float>({(float)-2.4, (float)1.0, (float)1.0}))) == (6));
    assert(candidate((std::vector<float>({(float)100.0, (float)1.0, (float)15.0, (float)2.0}))) == (10230));
    assert(candidate((std::vector<float>({(float)10000.0, (float)10000.0}))) == (200000000));
    assert(candidate((std::vector<float>({(float)-1.4, (float)4.6, (float)6.3}))) == (75));
    assert(candidate((std::vector<float>({(float)-1.4, (float)17.9, (float)18.9, (float)19.9}))) == (1086));
    assert(candidate((std::vector<float>({(float)0.0}))) == (0));
    assert(candidate((std::vector<float>({(float)-1.0}))) == (1));
    assert(candidate((std::vector<float>({(float)-1.0, (float)1.0, (float)0.0}))) == (2));
}
