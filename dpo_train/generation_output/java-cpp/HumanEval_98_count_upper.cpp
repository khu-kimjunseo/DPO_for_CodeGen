### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countUpper(String s) {
        long count = 0;
        for (int i = 0; i < s.length(); i += 2) {
            if ("AEIOU".indexOf(s.charAt(i)) >= 0) {
                count++;
            }
        }
        return count;
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
long count_upper(std::string s) {
    long count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ("AEIOU".indexOf(s.charAt(i)) >= 0) {
            count++;
        }
    }
    return count;
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
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<unordered