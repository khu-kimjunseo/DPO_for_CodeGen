### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumSquares(ArrayList<Long> lst) {
        long result = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (i % 3 == 0) {
                result += Math.pow(lst.get(i), 2);
            } else if (i % 4 == 0 && i % 3 != 0) {
                result += Math.pow(lst.get(i), 3);
            } else {
                result += lst.get(i);
            }
        }
        return result;
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
long sum_squares(std::vector<long> lst) {
    long result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            result += Math.pow(lst.at(i), 2);
        } else if (i % 4 == 0 && i % 3 != 0) {
            result += Math.pow(lst.at(i), 3);
        } else {
            result += lst.at(i);
        }
    }
    return result;
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
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<tuple>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
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
#include<bitset