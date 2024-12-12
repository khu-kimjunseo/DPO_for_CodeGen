#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string solve(long N) {
    std::string s = std::to_string(N);
    long sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    std::bitset<64> b(sum);
    return b.to_string().substr(b.to_string().find('1'));
}
