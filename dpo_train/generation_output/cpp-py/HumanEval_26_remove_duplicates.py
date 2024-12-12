### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> remove_duplicates(std::vector<long> numbers) {
    std::map<long, long> c;
    for (auto n : numbers) {
        c[n]++;
    }
    std::vector<long> result;
    for (auto n : numbers) {
        if (c[n] <= 1) {
            result.push_back(n);
        }
    }
    return result;
}

### Python version

from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    result = []
    for n in numbers:
        if n in result:
            continue
        result.append(n)
    return result

### C++ version

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstdint>
#include<cassert>
#include<cstdint>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdint>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdint>
#include<cstdint>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstdint>
#include<cstd