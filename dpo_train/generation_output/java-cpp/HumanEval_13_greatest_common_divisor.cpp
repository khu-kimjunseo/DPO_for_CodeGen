### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long greatestCommonDivisor(long a, long b) {
        while (b != 0) {
            long t = b;
            b = a % b;
            a = t;
        }
        return a;
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
long greatest_common_divisor(long a, long b) {
    long t = greatestCommonDivisor(b, a);
    return t;
}

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
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
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<c