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
bool monotonic(std::vector<long> l) {
    return std::is_sorted(l.begin(), l.end()) || std::is_sorted(l.rbegin(), l.rend());
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
    public static boolean monotonic(ArrayList<Long> l) {
        return monotonic(l.toArray());
    }
    public static boolean monotonic(long[] l) {
        return monotonic(Arrays.asList(l));
    }
    public static boolean monotonic(int[] l) {
        return monotonic(Arrays.asList(l));
    }
    public static boolean monotonic(long[] l, long[] r) {
        return monotonic(Arrays.asList(l, r));
    }
    public static boolean monotonic(int[] l, int[] r) {
        return monotonic(Arrays.asList(l, r));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c) {
        return monotonic(Arrays.asList(l, r, c));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c) {
        return monotonic(Arrays.asList(l, r, c));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d) {
        return monotonic(Arrays.asList(l, r, c, d));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d) {
        return monotonic(Arrays.asList(l, r, c, d));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e) {
        return monotonic(Arrays.asList(l, r, c, d, e));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e) {
        return monotonic(Arrays.asList(l, r, c, d, e));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f) {
        return monotonic(Arrays.asList(l, r, c, d, e, f));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e, int[] f) {
        return monotonic(Arrays.asList(l, r, c, d, e, f));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f, long[] g) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d, int[] e, int[] f, int[] g) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g));
    }
    public static boolean monotonic(long[] l, long[] r, long[] c, long[] d, long[] e, long[] f, long[] g, long[] h) {
        return monotonic(Arrays.asList(l, r, c, d, e, f, g, h));
    }
    public static boolean monotonic(int[] l, int[] r, int[] c, int[] d,