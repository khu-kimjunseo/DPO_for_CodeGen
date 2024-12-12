#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> get_positive(std::vector<long> l) {
    std::vector<long> res;
    for(auto e : l) {
        if(e > 0) {
            res.push_back(e);
        }
    }
    return res;
}
