#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> common(std::vector<long> l1, std::vector<long> l2) {
    std::set<long> ret;
    for (auto e1 : l1) {
        for (auto e2 : l2) {
            if (e1 == e2) {
                ret.insert(e1);
            }
        }
    }
    std::vector<long> v(ret.begin(), ret.end());
    std::sort(v.begin(), v.end());
    return v;
}
