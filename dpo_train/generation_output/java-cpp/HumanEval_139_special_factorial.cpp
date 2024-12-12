### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long specialFactorial(long n) {
        long factI = 1;
        long specialFact = 1;
        for (long i = 1; i <= n; i++) {
            factI *= i;
            specialFact *= factI;
        }
        return specialFact;
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
long special_factorial(long n) {
    long fact = 1;
    for (long i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

#include<iostream>
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
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<cassert>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cmath>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cassert>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<