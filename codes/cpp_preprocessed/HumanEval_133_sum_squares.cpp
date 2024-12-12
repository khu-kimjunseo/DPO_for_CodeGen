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
