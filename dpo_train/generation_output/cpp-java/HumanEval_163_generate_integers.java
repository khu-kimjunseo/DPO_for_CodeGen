### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> generate_integers(long a, long b) {
    long lower = std::max(2l, std::min(a, b));
    long upper = std::min(8l, std::max(a, b));
    std::vector<long> res;
    for (long i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            res.push_back(i);
        }
    }
    return res;
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
    public static ArrayList<Long> generateIntegers(long a, long b) {
        ArrayList<Long> res = new ArrayList<>();
        for (long i = a; i <= b; i++) {
            res.add(i);
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        long a = Long.parseLong(args[0]);
        long b = Long.parseLong(args[1]);
        long[] res = new long[2];
        res[0] = generateIntegers(a, b);
        res[1] = generateIntegers(a, b);
        System.out.println(Arrays.toString(res));
    }
}
