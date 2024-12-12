#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long count_upper(std::string s) {
    long count = 0;
    std::regex rx("[A-Z]{1,2}");
    std::smatch m;
    std::regex_search(s, m, rx);
    if (m.size() == 0) {
        return count;
    }
    for (int i = 0; i < m.size(); i++) {
        if (m[i].size() == 1) {
            count += count_upper(m[i][0]);
        } else {
            count += count_upper(m[i][0]);
            count += count_upper(m[i][1]);
        }
    }
    return count;
}
int main() {
    auto candidate = count_upper;
    assert(candidate(("aBCdEf")) == (1));
    assert(candidate(("abcdefg")) == (0));
    assert(candidate(("dBBE")) == (0));
    assert(candidate(("B")) == (0));
    assert(candidate(("U")) == (1));
    assert(candidate(("")) == (0));
    assert(candidate(("EEEE")) == (2));
}
