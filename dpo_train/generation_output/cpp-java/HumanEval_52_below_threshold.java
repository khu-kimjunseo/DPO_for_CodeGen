### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool below_threshold(std::vector<long> l, long t) {
    for (auto e: l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
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
    public static boolean belowThreshold(ArrayList<Long> l, long t) {
        return l.stream().filter(l1 -> below_threshold(l1, t)).findAny().isPresent();
    }
}

class Solution {
    public static void main(String[] args) {
        long t = Long.parseLong(args[0]);
        long n = Long.parseLong(args[1]);
        long m = Long.parseLong(args[2]);
        long k = Long.parseLong(args[3]);
        long[] l = new long[n];
        for (int i = 0; i < n; i++) {
            l[i] = Long.parseLong(args[4 + i]);
        }
        long[] r = new long[n];
        for (int i = 0; i < n; i++) {
            r[i] = Long.parseLong(args[4 + n + i]);
        }
        long[] s = new long[n];
        for (int i = 0; i < n; i++) {
            s[i] = Long.parseLong(args[4 + n + n + i]);
        }
        long[] t = new long[n];
        for (int i = 0; i < n; i++) {
            t[i] = Long.parseLong(args[4 + n + n + n + i]);
        }
        long[] u = new long[n];
        for (int i = 0; i < n; i++) {
            u[i] = Long.parseLong(args[4 + n + n + n + n + i]);
        }
        long[] v = new long[n];
        for (int i = 0; i < n; i++) {
            v[i] = Long.parseLong(args[4 + n + n + n + n + i]);
        }
        long[] w = new long[n];
        for (int i = 0; i < n; i++) {
            w[i] = Long.parseLong(args[4 + n + n + n + n + n + i]);
        }
        long[] x = new long[n];
        for (int i = 0; i < n; i++) {
            x[i] = Long.parseLong(args[4 + n + n + n + n + n + i]);
        }
        long[] y = new long[n];
        for (int i = 0; i < n; i++) {
            y[i] = Long.parseLong(args[4 + n + n + n + n + n + n + i]);
        }
        long[] z = new long[n];
        for (int i = 0; i < n; i++) {
            z[i] = Long.parseLong(args[4 + n + n + n + n + n + n + i]);
        }
        long[] w1 = new long[n];
        for (int i = 0; i < n; i++) {
            w1[i] = Long.parseLong(args[4 + n + n + n + n + n + n + n + i]);
        }
        long[] w2 = new long[n];
        for (int i = 0; i < n; i++) {
            w2[i] = Long.parseLong(args[4 + n + n + n + n + n + n + n + i]);
        }
        long[] w3 = new long[n];
        for (int i = 0; i < n; i++) {
            w3[i] = Long.parse