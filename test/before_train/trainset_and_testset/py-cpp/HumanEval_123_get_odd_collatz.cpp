#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> get_odd_collatz(long n) {
    std::vector<long> odd_collatz;
    if (n == 0) {
        return odd_collatz;
    }
    if (n == 1) {
        return odd_collatz;
    }
    if (n % 2 == 0) {
        odd_collatz.push_back(n);
    }
    else {
        long temp = n;
        while (temp % 2 == 0) {
            temp = temp / 2;
        }
        odd_collatz.push_back(temp);
    }
    return odd_collatz;
}
int main() {
    auto candidate = get_odd_collatz;
    assert(candidate((14)) == (std::vector<long>({(long)1, (long)5, (long)7, (long)11, (long)13, (long)17})));
    assert(candidate((5)) == (std::vector<long>({(long)1, (long)5})));
    assert(candidate((12)) == (std::vector<long>({(long)1, (long)3, (long)5})));
    assert(candidate((1)) == (std::vector<long>({(long)1})));
}
