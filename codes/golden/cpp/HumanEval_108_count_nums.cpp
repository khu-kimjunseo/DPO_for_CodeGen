#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long count_nums(std::vector<long> arr) {
    long count = 0;
    for (int i = 0; i < arr.size(); i++) {
        long n = arr[i];
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        std::vector<long> digits;
        std::stringstream ss;
        ss << n;
        std::string str = ss.str();
        for (int j = 0; j < str.size(); j++) {
            digits.push_back(str[j] - '0');
        }
        digits[0] = digits[0] * neg;
        long sum = 0;
        for (int j = 0; j < digits.size(); j++) {
            sum += digits[j];
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    auto candidate = count_nums;
    assert(candidate((std::vector<long>())) == (0));
    assert(candidate((std::vector<long>({(long)-1, (long)-2, (long)0}))) == (0));
    assert(candidate((std::vector<long>({(long)1, (long)1, (long)2, (long)-2, (long)3, (long)4, (long)5}))) == (6));
    assert(candidate((std::vector<long>({(long)1, (long)6, (long)9, (long)-6, (long)0, (long)1, (long)5}))) == (5));
    assert(candidate((std::vector<long>({(long)1, (long)100, (long)98, (long)-7, (long)1, (long)-1}))) == (4));
    assert(candidate((std::vector<long>({(long)12, (long)23, (long)34, (long)-45, (long)-56, (long)0}))) == (5));
    assert(candidate((std::vector<long>({(long)0, (long)1}))) == (1));
    assert(candidate((std::vector<long>({(long)1}))) == (1));
}
