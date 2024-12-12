### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long xOrY(long n, long x, long y) {
        if (n == 1) {
            return y;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return y;
            }
        }
        return x;
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
long x_or_y(long n, long x, long y) {
    if (n == 1) {
        return y;
    }
    long result = 0;
    for (long i = 2; i < n; i++) {
        if (n % i == 0) {
            result = result + x;
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<iomanip>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include