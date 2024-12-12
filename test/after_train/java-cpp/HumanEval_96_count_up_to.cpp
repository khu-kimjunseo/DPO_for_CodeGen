#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> count_up_to(long n) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
int main() {
    auto candidate = count_up_to;
    assert(candidate((5)) == (std::vector<long>({(long)2, (long)3})));
    assert(candidate((6)) == (std::vector<long>({(long)2, (long)3, (long)5})));
    assert(candidate((7)) == (std::vector<long>({(long)2, (long)3, (long)5})));
    assert(candidate((10)) == (std::vector<long>({(long)2, (long)3, (long)5, (long)7})));
    assert(candidate((0)) == (std::vector<long>()));
    assert(candidate((22)) == (std::vector<long>({(long)2, (long)3, (long)5, (long)7, (long)11, (long)13, (long)17, (long)19})));
    assert(candidate((1)) == (std::vector<long>()));
    assert(candidate((18)) == (std::vector<long>({(long)2, (long)3, (long)5, (long)7, (long)11, (long)13, (long)17})));
    assert(candidate((47)) == (std::vector<long>({(long)2, (long)3, (long)5, (long)7, (long)11, (long)13, (long)17, (long)19, (long)23, (long)29, (long)31, (long)37, (long)41, (long)43})));
    assert(candidate((101)) == (std::vector<long>({(long)2, (long)3, (long)5, (long)7, (long)11, (long)13, (long)17, (long)19, (long)23, (long)29, (long)31, (long)37, (long)41, (long)43, (long)47, (long)53, (long)59, (long)61, (long)67, (long)71, (long)73, (long)79, (long)83, (long)89, (long)97})));
}
