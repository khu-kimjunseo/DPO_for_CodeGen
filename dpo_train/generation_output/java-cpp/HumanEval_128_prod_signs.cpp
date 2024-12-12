### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
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
std::optional<long> prod_signs(std::vector<long> arr) {
    if (arr.isEmpty()) return std::optional<long>();
    long prod = arr.back();
    for (long x : arr) {
        if (x < 0) prod = prod * -1;
        else prod = prod * x;
    }
    return prod;
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
#include<cstdint>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstd