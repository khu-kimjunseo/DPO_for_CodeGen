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
#include<unordered_map>
#include<unordered_set>
long count_nums(std::vector<long> arr) {
    long res = 0;
    for (long i = 0; i < arr.size(); i++) {
        res += count_nums(arr[i]);
    }
    return res;
}

int main() {
    std::vector<long> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << count_nums(arr) << std::endl;
    return 0;
}
