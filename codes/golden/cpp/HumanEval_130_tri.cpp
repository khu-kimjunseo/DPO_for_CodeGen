#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> tri(long n) {
    if (n == 0) {
        return {1};
    }
    std::vector<long> my_tri = {1, 3};
    for (long i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            my_tri.push_back(i / 2 + 1);
        } else {
            my_tri.push_back(my_tri[i - 1] + my_tri[i - 2] + (i + 3) / 2);
        }
    }
    return my_tri;
}
int main() {
    auto candidate = tri;
    assert(candidate((3)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8})));
    assert(candidate((4)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3})));
    assert(candidate((5)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15})));
    assert(candidate((6)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15, (long)4})));
    assert(candidate((7)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15, (long)4, (long)24})));
    assert(candidate((8)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15, (long)4, (long)24, (long)5})));
    assert(candidate((9)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15, (long)4, (long)24, (long)5, (long)35})));
    assert(candidate((20)) == (std::vector<long>({(long)1, (long)3, (long)2, (long)8, (long)3, (long)15, (long)4, (long)24, (long)5, (long)35, (long)6, (long)48, (long)7, (long)63, (long)8, (long)80, (long)9, (long)99, (long)10, (long)120, (long)11})));
    assert(candidate((0)) == (std::vector<long>({(long)1})));
    assert(candidate((1)) == (std::vector<long>({(long)1, (long)3})));
}
