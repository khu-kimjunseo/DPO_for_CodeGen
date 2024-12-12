### Python version

from typing import List

def add_elements(arr: List[int], k: int) -> int:
    return sum(elem for elem in arr[:k] if len(str(elem)) <= 2)

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long add_elements(std::vector<long> arr, long k) {
    long sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

