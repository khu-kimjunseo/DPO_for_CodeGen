#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long double_the_difference(std::vector<float> lst) {
    long sum = 0;
    for (auto i : lst) {
        if (i > 0 && int(i)%2!=0 && i == int(i)) {
            sum += pow(i, 2);
        }
    }
    return sum;
}
int main() {
    auto candidate = double_the_difference;
    assert(candidate((std::vector<float>())) == (0));
    assert(candidate((std::vector<float>({(float)5.0f, (float)4.0f}))) == (25));
    assert(candidate((std::vector<float>({(float)0.1f, (float)0.2f, (float)0.3f}))) == (0));
    assert(candidate((std::vector<float>({(float)-10.0f, (float)-20.0f, (float)-30.0f}))) == (0));
    assert(candidate((std::vector<float>({(float)-1.0f, (float)-2.0f, (float)8.0f}))) == (0));
    assert(candidate((std::vector<float>({(float)0.2f, (float)3.0f, (float)5.0f}))) == (34));
    assert(candidate((std::vector<float>({(float)-9.0f, (float)-7.0f, (float)-5.0f, (float)-3.0f, (float)-1.0f, (float)1.0f, (float)3.0f, (float)5.0f, (float)7.0f, (float)9.0f}))) == (165));
}
