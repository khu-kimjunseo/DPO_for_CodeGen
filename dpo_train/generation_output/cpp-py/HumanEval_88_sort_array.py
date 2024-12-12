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
std::vector<long> sort_array(std::vector<long> array) {
    if (array.empty()) {
        return std::vector<long>();
    } else {
        bool isReversed = (array[0] + array[array.size() - 1]) % 2 == 0;
        std::sort(array.begin(), array.end(), [&](long a, long b) {
            return isReversed ? a > b : a < b;
        });
        return array;
    }
}

### Python version

from typing import List

def sort_array(array: List[int]) -> List[int]:
    return sorted(array)

### C++ version

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_