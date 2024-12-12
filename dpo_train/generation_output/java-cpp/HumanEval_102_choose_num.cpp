### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long chooseNum(long x, long y) {
        if (x > y) {
            return -1;
        }
        if (y % 2 == 0) {
            return y;
        }
        if (x == y) {
            return -1;
        }
        return y - 1;
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
long choose_num(long x, long y) {
    if (x == y) {
        return x;
    }
    if (x > y) {
        return -1;
    }
    if (x % 2 == 0) {
        return x;
    }
    if (y % 2 == 0) {
        return y;
    }
    return y - 1;
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
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>