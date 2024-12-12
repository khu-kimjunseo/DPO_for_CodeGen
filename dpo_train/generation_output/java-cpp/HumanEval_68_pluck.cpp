### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        if (arr.size() == 0) return new ArrayList<Long>();
        List<Long> evens = arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());
        if (evens.size() == 0) return new ArrayList<Long>();
        long min = Collections.min(evens);
        return new ArrayList<Long>(Arrays.asList(min, (long) arr.indexOf(min)));
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
std::vector<long> pluck(std::vector<long> arr) {
    std::vector<long> res;
    if (arr.size() == 0) return res;
    long min = Collections.min(arr);
    res.push_back(min);
    for (long x : arr) {
        if (x % 2 == 0) res.push_back(x);
    }
    return res;
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
#include<numeric>
#include<utility>
#include<functional>
#include<iterator>
#include<iterator>
#include<iomanip>
#include<fstream>
#include<numeric>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#