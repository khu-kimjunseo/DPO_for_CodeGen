### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> factorize(long n) {
        ArrayList<Long> fact = new ArrayList<>();
        long i = 2;
        while (i <= n) {
            if (n % i == 0) {
                fact.add(i);
                n /= i;
            } else {
                i++;
            }
        }
        return fact;
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
std::vector<long> factorize(long n) {
    std::vector<long> fact(n+1);
    long i = 2;
    while (i <= n) {
        if (n % i == 0) {
            fact[i] = i;
            n /= i;
        } else {
            i++;
        }
    }
    return fact;
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
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
