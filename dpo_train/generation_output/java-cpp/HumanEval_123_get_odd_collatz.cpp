### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getOddCollatz(long n) {
        ArrayList<Long> oddCollatz = new ArrayList<Long>();
        if (n % 2 == 1) {
            oddCollatz.add(n);
        }
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = n * 3 + 1;
            }
            if (n % 2 == 1) {
                oddCollatz.add(n);
            }
        }
        oddCollatz.sort(null);
        return oddCollatz;
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
std::vector<long> get_odd_collatz(long n) {
    std::vector<long> oddCollatz(n);
    for (long i = 1; i <= n; i++) {
        oddCollatz[i] = i;
    }
    return oddCollatz;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<tuple>
#include<bitset>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib