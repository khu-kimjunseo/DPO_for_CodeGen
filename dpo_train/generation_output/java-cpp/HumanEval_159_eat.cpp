### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> eat(long number, long need, long remaining) {
        return (need <= remaining) ? new ArrayList<Long>(Arrays.asList(number + need, remaining - need)) : new ArrayList<Long>(Arrays.asList(number + remaining, 0L));
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
std::vector<long> eat(long number, long need, long remaining) {
    std::vector<long> result;
    std::vector<long>::iterator it = result.begin();
    std::vector<long>::iterator it_end = result.end();
    while (it != it_end) {
        if ((*it) + need <= remaining) {
            *it = (*it) + need;
            ++it;
        } else {
            *it = 0L;
            ++it;
        }
    }
    return result;
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
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cassert>
#include<cstdint>
#include<ciso646>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<iomanip>
#include<cstdint>
#include<ciso646>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<iomanip>
#include<cstdint>
#include<ciso646>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<iomanip>
#include<cstdint>
#include<ciso646>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<string>
#include<bitset>
#include<utility>
#include<functional>
#include<numeric>
#include<iomanip>
#include<cstdint>
#include<ciso646>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>