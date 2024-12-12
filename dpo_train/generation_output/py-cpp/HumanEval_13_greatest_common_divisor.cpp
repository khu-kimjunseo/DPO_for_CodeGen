### Python version

def greatest_common_divisor(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

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
long greatest_common_divisor(long a, long b) {
    long c = 1;
    while (a) {
        c = c * a % b;
        a = a / b;
    }
    return c;
}

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cassert>
#include<ctime>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<functional>
#include<utility>
#include<iostream>
#include<iomanip>
#include<sstream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstd