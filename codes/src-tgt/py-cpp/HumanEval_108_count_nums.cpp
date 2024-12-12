### Python version

from typing import List

def count_nums(arr: List[int]) -> int:
    def digits_sum(n):
        neg = 1
        if n < 0: n, neg = -1 * n, -1 
        n = [int(i) for i in str(n)]
        n[0] = n[0] * neg
        return sum(n)
    return len(list(filter(lambda x: x > 0, [digits_sum(i) for i in arr])))

### C++ version

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


