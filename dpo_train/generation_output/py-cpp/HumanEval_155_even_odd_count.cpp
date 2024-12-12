### Python version

from typing import Tuple 

def even_odd_count(num: int) -> Tuple[int, int]:
    even_count = 0
    odd_count = 0
    for i in str(abs(num)):
        if int(i)%2==0:
            even_count +=1
        else:
            odd_count +=1
    return (even_count, odd_count)

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
std::tuple<long, long> even_odd_count(long num) {
    long even_count = 0;
    long odd_count = 0;
    for (long i = 0; i < num; i++) {
        if (i%2==0) {
            even_count +=1;
        } else {
            odd_count +=1;
        }
    }
    return std::make_tuple(even_count, odd_count);
}

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<functional>
#include<utility>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cassert>
#include<cstdint>
#include<iomanip>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<utility>
#include<functional>
#include<utility>
#include<cstdint>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype