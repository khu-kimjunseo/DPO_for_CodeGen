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
std::optional<std::string> longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return std::nullopt;
    }
    auto it = std::max_element(strings.begin(), strings.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return *it;
}

### Python version

from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    if len(strings) == 1:
        return strings[0]
    return longest(strings[1:])

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
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<c