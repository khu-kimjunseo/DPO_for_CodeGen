### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long smallestChange(ArrayList<Long> arr) {
        long ans = 0;
        for (int i = 0; i < arr.size() / 2; i++) {
            if (arr.get(i) != arr.get(arr.size() - i - 1)) {
                ans++;
            }
        }
        return ans;
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
long smallest_change(std::vector<long> arr) {
    long ans = 0;
    for (int i = 0; i < arr.size() / 2; i++) {
        if (arr.get(i) != arr.get(arr.size() - i - 1)) {
            ans++;
        }
    }
    return ans;
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
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include