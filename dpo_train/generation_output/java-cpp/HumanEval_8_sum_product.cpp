### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> sumProduct(ArrayList<Long> numbers) {
        long sum = 0;
        long prod = 1;
        for (long n : numbers) {
            sum += n;
            prod *= n;
        }
        return Pair.with(sum, prod);
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
std::tuple<long, long> sum_product(std::vector<long> numbers) {
    std::tuple<long, long> result;
    long sum = 0;
    long prod = 1;
    for (long n : numbers) {
        sum += n;
        prod *= n;
    }
    result = std::make_tuple(sum, prod);
    return result;
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
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cassert>
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
#include<cstring