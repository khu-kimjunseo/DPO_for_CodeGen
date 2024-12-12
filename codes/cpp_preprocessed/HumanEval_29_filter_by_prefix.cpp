#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> res;
    for (auto x: strings) {
        if (x.find(prefix) == 0) {
            res.push_back(x);
        }
    }
    return res;
}