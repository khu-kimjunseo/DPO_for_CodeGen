### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long modp(long n, long p) {
    long ret = 1;
    for (int i = 0; i < n; i++) {
        ret = (2 * ret) % p;
    }
    return ret;
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
    public static long modp(long n, long p) {
        return (n % p);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
        }
        long[] b = new long[m];
        for (int i = 0; i < m; i++) {
            b[i] = in.nextLong();
        }
        long[] c = new long[n];
        for (int i = 0; i < n; i++) {
            c[i] = modp(a[i], b[i]);
        }
        long[] d = new long[m];
        for (int i = 0; i < m; i++) {
            d[i] = modp(b[i], c[i]);
        }
        long[] e = new long[n];
        for (int i = 0; i < n; i++) {
            e[i] = modp(c[i], d[i]);
        }
        long[] f = new long[n];
        for (int i = 0; i < n; i++) {
            f[i] = modp(d[i], e[i]);
        }
        long[] g = new long[n];
        for (int i = 0; i < n; i++) {
            g[i] = modp(e[i], f[i]);
        }
        long[] h = new long[n];
        for (int i = 0; i < n; i++) {
            h[i] = modp(f[i], g[i]);
        }
        long[] i = new long[n];
        for (int i = 0; i < n; i++) {
            i[i] = modp(g[i], h[i]);
        }
        long[] j = new long[n];
        for (int i = 0; i < n; i++) {
            j[i] = modp(h[i], i);
        }
        long[] k = new long[n];
        for (int i = 0; i < n; i++) {
            k[i] = modp(i, j[i]);
        }
        long[] l = new long[n];
        for (int i = 0; i < n; i++) {
            l[i] = modp(k[i], l[i]);
        }
        long[] m = new long[n];
        for (int i = 0; i < n; i++) {
            m[i] = modp(l[i], m[i]);
        }
        long[] n = new long[n];
        for (int i = 0; i < n; i++) {
            n[i] = modp(m[i], n[i]);
        }
        long[] o = new long[n];
        for (int i = 0; i < n; i++) {
            o[i] = modp(n[i], o[i]);
        }
        long[] p = new long[n];
        for (int i = 0; i < n; i++) {
            p[i] = modp(o[i], p[i]);
        }
        long[] q = new long[n];
        