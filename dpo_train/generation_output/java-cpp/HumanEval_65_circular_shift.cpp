### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String circularShift(long x, long shift) {
        String s = Long.toString(x);
        if (shift > s.length()) {
            return new StringBuilder(s).reverse().toString();
        }
        return s.substring((int) (s.length() - shift)) + s.substring(0, (int) (s.length() - shift));
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
std::string circular_shift(long x, long shift) {
    std::stringstream ss;
    ss << x;
    std::string s = ss.str();
    if (shift > s.length()) {
        return s.substring(0, (int) (s.length() - shift));
    }
    return s.substring((int) (s.length() - shift));
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
#include<functional>
#include<cmath>
#include<ctime>
#include<cctype>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iomanip>
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
#include<cstdlib