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
long fib4(long n) {
    std::vector<long> results = {0, 0, 2, 0};
    if (n < 4) {
        return results[n];
    }
    for (long i = 4; i <= n; i++) {
        long next = results[0] + results[1] + results[2] + results[3];
        results.erase(results.begin());
        results.push_back(next);
    }
    return results[3];
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fib4(long n) {
        ArrayList<Long> results = new ArrayList<Long>(Arrays.asList(0L, 0L, 2L, 0L));
        if (n < 4) {
            return results.get((int)n);
        }

        for (long i = 4; i <= n; i++) {
            results.add(results.get(3) + results.get(2) + results.get(1) + results.get(0));
            results.remove(0);
        }

        return results.get(3);
    }
    
    

}

