### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean monotonic(ArrayList<Long> l) {
        if (l.equals(l.stream().sorted().collect(Collectors.toList())) || l.equals(l.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList()))) {
            return true;
        }
        return false;
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
bool monotonic(std::vector<long> l) {
    std::vector<long>::iterator it = l.begin();
    std::vector<long>::iterator end = l.end();
    while (it != end) {
        if (monotonic(*it)) {
            return true;
        }
        ++it;
    }
    return false;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cassert>
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
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#include<map>
#include<set>
#