### Python version

def fib4(n: int) -> int:
    results = [0, 0, 2, 0]
    if n < 4:
        return results[n]

    for _ in range(4, n + 1):
        results.append(results[-1] + results[-2] + results[-3] + results[-4])
        results.pop(0)

    return results[-1]

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
        if (n == 0) {
            return 1;
        } else if (n == 1) {
            return 2;
        } else if (n == 2) {
            return 3;
        } else if (n == 3) {
            return 4;
        } else {
            return fib4(n - 1) + fib4(n - 2);
        }
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = Long.parseLong(args[2 + i]);
        }
        long[] b = new long[m];
        for (int i = 0; i < m; i++) {
            b[i] = Long.parseLong(args[3 + i]);
        }
        long[] c = new long[n];
        for (int i = 0; i < n; i++) {
            c[i] = fib4(a[i]);
        }
        long[] d = new long[m];
        for (int i = 0; i < m; i++) {
            d[i] = fib4(b[i]);
        }
        long[] e = new long[n];
        for (int i = 0; i < n; i++) {
            e[i] = fib4(c[i]);
        }
        long[] f = new long[m];
        for (int i = 0; i < m; i++) {
            f[i] = fib4(d[i]);
        }
        long[] g = new long[n];
        for (int i = 0; i < n; i++) {
            g[i] = fib4(e[i]);
        }
        long[] h = new long[m];
        for (int i = 0; i < m; i++) {
            h[i] = fib4(f[i]);
        }
        long[] i = new long[n];
        for (int i = 0; i < n; i++) {
            i[i] = fib4(g[i]);
        }
        long[] j = new long[n];
        for (int i = 0; i < n; i++) {
            j[i] = fib4(h[i]);
        }
        long[] k = new long[n];
        for (int i = 0; i < n; i++) {
            k[i] = fib4(i);
        }
        long[] l = new long[n];
        for (int i = 0; i < n; i++) {
            l[i] = fib4(j[i]);
        }
        long[] m = new long[n];
        for (int i = 0; i < n; i++) {
            m[i] = fib4(l[i]);
        }
        long[] n = new long[n];
        for (int i = 0; i < n; i++) {
            n[i] = fib4(m[i]);
        }
        long[] o = new long[n];
        for (int i = 0; i < n; i++) {
            o[i] = fib4(n[i]);
        }
        long[] p = new long[n];
        for (int i = 0; i < n; i++) {
            p[i] = fib4(o[