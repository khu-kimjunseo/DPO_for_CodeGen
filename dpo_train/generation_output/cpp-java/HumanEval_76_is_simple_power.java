### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_simple_power(long x, long n) {
    if (n == 1) {
        return x == 1;
    }
    long power = 1;
    while (power < x) {
        power = power * n;
    }
    return power == x;
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
    public static boolean isSimplePower(long x, long n) {
        return is_simple_power(x, n);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long x = in.nextLong();
        long y = in.nextLong();
        long z = in.nextLong();
        long result = Problem.isSimplePower(x, n) ? 1 : 0;
        System.out.println(result);
    }
}
