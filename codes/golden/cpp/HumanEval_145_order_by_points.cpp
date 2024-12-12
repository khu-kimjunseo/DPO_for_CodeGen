#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> order_by_points(std::vector<long> nums) {
    auto digits_sum = [](long n) -> long {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        std::stringstream ss;
        ss << n;
        std::string s = ss.str();
        std::vector<long> v;
        for (auto c : s) {
            v.push_back(c - '0');
        }
        v[0] = v[0] * neg;
        return std::accumulate(v.begin(), v.end(), 0);
    };
    std::sort(nums.begin(), nums.end(), [&](long a, long b) {
        return digits_sum(a) < digits_sum(b);
    });
    return nums;
}
int main() {
    auto candidate = order_by_points;
    assert(candidate((std::vector<long>({(long)1, (long)11, (long)-1, (long)-11, (long)-12}))) == (std::vector<long>({(long)-1, (long)-11, (long)1, (long)-12, (long)11})));
    assert(candidate((std::vector<long>({(long)1234, (long)423, (long)463, (long)145, (long)2, (long)423, (long)423, (long)53, (long)6, (long)37, (long)3457, (long)3, (long)56, (long)0, (long)46}))) == (std::vector<long>({(long)0, (long)2, (long)3, (long)6, (long)53, (long)423, (long)423, (long)423, (long)1234, (long)145, (long)37, (long)46, (long)56, (long)463, (long)3457})));
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)1, (long)-11, (long)-32, (long)43, (long)54, (long)-98, (long)2, (long)-3}))) == (std::vector<long>({(long)-3, (long)-32, (long)-98, (long)-11, (long)1, (long)2, (long)43, (long)54})));
    assert(candidate((std::vector<long>({(long)1, (long)2, (long)3, (long)4, (long)5, (long)6, (long)7, (long)8, (long)9, (long)10, (long)11}))) == (std::vector<long>({(long)1, (long)10, (long)2, (long)11, (long)3, (long)4, (long)5, (long)6, (long)7, (long)8, (long)9})));
    assert(candidate((std::vector<long>({(long)0, (long)6, (long)6, (long)-76, (long)-21, (long)23, (long)4}))) == (std::vector<long>({(long)-76, (long)-21, (long)0, (long)4, (long)23, (long)6, (long)6})));
}
