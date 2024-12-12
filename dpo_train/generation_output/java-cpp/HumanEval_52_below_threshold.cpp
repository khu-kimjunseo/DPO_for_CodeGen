### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowThreshold(ArrayList<Long> l, long t) {
        for (long e : l) {
            if (e >= t) {
                return false;
            }
        }
        return true;
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
bool below_threshold(std::vector<long> l, long t) {
    for (long e : l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
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
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<bitset>
#include<map>
#include<set>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
#include<bitset>
