### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddCount(long num) {
        long evenCount = 0;
        long oddCount = 0;
        for (char i : Long.toString(Math.abs(num)).toCharArray()) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return Pair.with(evenCount, oddCount);
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
std::tuple<long, long> even_odd_count(long num) {
    long evenCount = 0;
    long oddCount = 0;
    for (char i : Long.toString(Math.abs(num)).toCharArray()) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    return std::make_tuple(evenCount, oddCount);
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
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
#include<string>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<utility>
#include<functional>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
