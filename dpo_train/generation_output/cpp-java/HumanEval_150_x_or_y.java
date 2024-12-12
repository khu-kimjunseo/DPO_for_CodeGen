### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long x_or_y(long n, long x, long y) {
    if (n == 1) {
        return y;
    }
    for (long i = 2; i < n; i++) {
        if (n % i == 0) {
            return y;
            break;
        }
    }
    return x;
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
    public static long xOrY(long n, long x, long y) {
        if (n == 1) {
            return y;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return y;
            }
        }
        return x;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long x = in.nextLong();
        long y = in.nextLong();
        System.out.println(Problem.xOrY(n, x, y));
    }
}