#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    bool switch_ = true;
    while (lst.size()) {
        res.push_back(switch_ ? *std::min_element(lst.begin(), lst.end()) : *std::max_element(lst.begin(), lst.end()));
        lst.erase(std::find(lst.begin(), lst.end(), res.back()));
        switch_ = !switch_;
    }
    return res;
}
