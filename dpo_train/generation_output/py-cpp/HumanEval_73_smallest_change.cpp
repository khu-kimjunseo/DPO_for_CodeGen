### Python version

from typing import List

def smallest_change(arr: List[int]) -> int:
    ans = 0
    for i in range(len(arr) // 2):
        if arr[i] != arr[len(arr) - i - 1]:
            ans += 1
    return ans

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
long smallest_change(std::vector<long> arr) {
    long ans = 0;
    for (long i = 0; i < arr.size(); i++) {
        if (arr[i] != arr[i]) {
            ans += 1;
        }
    }
    return ans;
}

int main() {
    std::vector<long> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<long> res = smallest_change(arr);
    std::cout << res << std::endl;
    return 0;
}
