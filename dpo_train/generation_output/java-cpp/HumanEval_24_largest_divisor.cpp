### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestDivisor(long n) {
        for (long i = n-1; i >= 1; i--) {
            if (n % i == 0) {
                return i;
            }
        }
        return 1;
    }
}

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
long largest_divisor(long n) {
    long result = 1;
    while (n > 1) {
        result *= n;
        n /= 2;
    }
    return result;
}

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdint>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<initializer_list>
#include<bitset>
#include<utility>
#include<functional>
#include<bitset>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
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
#include<c