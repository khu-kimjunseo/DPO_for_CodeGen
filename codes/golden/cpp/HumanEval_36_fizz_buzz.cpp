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
int main() {
    auto candidate = fizz_buzz;
    assert(candidate((50)) == (0));
    assert(candidate((78)) == (2));
    assert(candidate((79)) == (3));
    assert(candidate((100)) == (3));
    assert(candidate((200)) == (6));
    assert(candidate((4000)) == (192));
    assert(candidate((10000)) == (639));
    assert(candidate((100000)) == (8026));
}
