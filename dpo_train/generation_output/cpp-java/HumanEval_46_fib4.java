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
        if (n < 4) {
            return fib4(n);
        }
        long result = 1;
        for (long i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long result = Problem.fib4(n);
        System.out.println(result);
    }
}
