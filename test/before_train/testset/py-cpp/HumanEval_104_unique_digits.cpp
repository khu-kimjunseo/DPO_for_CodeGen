#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> unique_digits(std::vector<long> x) {
    std::vector<long> res;
    std::unordered_map<long, long> m;
    std::unordered_set<long> s;
    std::stringstream ss;
    for (long i = 0; i < x.size(); i++) {
        ss << x[i];
        long j = 0;
        while (j < x[i]) {
            m[x[i] + j] = j;
            j++;
        }
        s.insert(m[x[i]]);
    }
    for (long i = 0; i < x.size(); i++) {
        res.push_back(m[x[i]]);
    }
    return res;
}
int main() {
    auto candidate = unique_digits;
    assert(candidate((std::vector<long>({(long)15, (long)33, (long)1422, (long)1}))) == (std::vector<long>({(long)1, (long)15, (long)33})));
    assert(candidate((std::vector<long>({(long)152, (long)323, (long)1422, (long)10}))) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)12345, (long)2033, (long)111, (long)151}))) == (std::vector<long>({(long)111, (long)151})));
    assert(candidate((std::vector<long>({(long)135, (long)103, (long)31}))) == (std::vector<long>({(long)31, (long)135})));
}
