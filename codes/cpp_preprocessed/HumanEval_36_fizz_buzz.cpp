#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fizz_buzz(long n) {
    std::vector<long> ns;
    for (long i = 0; i < n; i++) {
        if (i % 11 == 0 || i % 13 == 0) {
            ns.push_back(i);
        }
    }
    std::stringstream ss;
    for (auto i : ns) {
        ss << i;
    }
    std::string s = ss.str();
    long ans = 0;
    for (auto c : s) {
        ans += (c == '7');
    }
    return ans;
}