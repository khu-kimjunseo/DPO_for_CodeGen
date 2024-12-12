#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> res;
    for (auto x : values) {
        if (x.type() == typeid(int)) {
            res.push_back(std::any_cast<int>(x));
        }
    }
    return res;
}
