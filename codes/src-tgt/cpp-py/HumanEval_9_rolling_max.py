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
std::vector<long> rolling_max(std::vector<long> numbers) {
    std::vector<long> result;
    long running_max = 0;
    for (long n : numbers) {
        running_max = std::max(running_max, n);
        result.push_back(running_max);
    }
    return result;
}


### Python version

from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    running_max = None
    result = []

    for n in numbers:
        if running_max is None:
            running_max = n
        else:
            running_max = max(running_max, n)

        result.append(running_max)

    return result
