### Python version

from typing import List

def f(n: int) -> List[int]:
    ret = []
    for i in range(1,n+1):
        if i%2 == 0:
            x = 1
            for j in range(1,i+1): x *= j
            ret += [x]
        else:
            x = 0
            for j in range(1,i+1): x += j
            ret += [x]
    return ret

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> f(long n) {
        ArrayList<Long> ret = new ArrayList<>();
        for (long i = 1; i <= n; i++) {
            ret.add(i);
        }
        return ret;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long[] a = new long[n];
        for (long i = 0; i < n; i++) {
            a[i] = Long.parseLong(args[2 + i]);
        }
        long[] b = new long[m];
        for (long i = 0; i < m; i++) {
            b[i] = Long.parseLong(args[3 + i]);
        }
        long[] c = new long[n];
        for (long i = 0; i < n; i++) {
            c[i] = Long.parseLong(args[4 + i]);
        }
        long[] d = new long[m];
        for (long i = 0; i < m; i++) {
            d[i] = Long.parseLong(args[5 + i]);
        }
        long[] e = new long[n];
        for (long i = 0; i < n; i++) {
            e[i] = Long.parseLong(args[6 + i]);
        }
        long[] f = new long[n];
        for (long i = 0; i < n; i++) {
            f[i] = Long.parseLong(args[7 + i]);
        }
        long[] g = new long[m];
        for (long i = 0; i < m; i++) {
            g[i] = Long.parseLong(args[8 + i]);
        }
        long[] h = new long[n];
        for (long i = 0; i < n; i++) {
            h[i] = Long.parseLong(args[9 + i]);
        }
        long[] i = new long[n];
        for (long i = 0; i < n; i++) {
            i[i] = Long.parseLong(args[10 + i]);
        }
        long[] j = new long[n];
        for (long i = 0; i < n; i++) {
            j[i] = Long.parseLong(args[11 + i]);
        }
        long[] k = new long[n];
        for (long i = 0; i < n; i++) {
            k[i] = Long.parseLong(args[12 + i]);
        }
        long[] l = new long[n];
        for (long i = 0; i < n; i++) {
            l[i] = Long.parseLong(args[13 + i]);
        }
        long[] m = new long[n];
        for (long i = 0; i < n; i++) {
            m[i] = Long.parseLong(args[14 + i]);
        }
        long[] n = new long[n];
        for (long i = 0; i < n; i++) {
            n[i] = Long.parseLong(args[15 + i]);
        }
        long[] o = new long[n];
        for (long i = 0; i < n; i++) {
            o[i] = Long.parseLong(args[16 + i]);
        }
        long[] p = new long[n];