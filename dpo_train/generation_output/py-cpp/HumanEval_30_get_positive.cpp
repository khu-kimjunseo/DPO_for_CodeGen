### Python version

from typing import List

def get_positive(l: List[int]) -> List[int]:
    return [e for e in l if e > 0]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> get_positive(std::vector<long> l) {
    std::vector<long> res;
    std::unordered_map<long, long> m;
    std::unordered_set<long> s;
    std::stringstream ss;
    for (long i = 0; i < l.size(); i++) {
        ss << l[i];
        std::string s = ss.str();
        std::regex r("^[0-9]+$");
        std::smatch m;
        if (std::regex_search(s, m, r)) {
            res.push_back(m[0].str());
        }
    }
    return res;
}

int main() {
    std::vector<long> l = get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_positive(get_