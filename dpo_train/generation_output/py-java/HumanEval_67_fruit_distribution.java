### Python version

def fruit_distribution(s: str, n: int) -> int:
    lis = list()
    for i in s.split(' '):
        if i.isdigit():
            lis.append(int(i))
    return n - sum(lis)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fruitDistribution(String s, long n) {
        List<Long> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(fruit_distribution(s, i));
        }
        return list.stream().reduce(0L, (x, y) -> x + y);
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
            c[i] = Long.parseLong(args[4 + i]);
        }
        long[] d = new long[m];
        for (int i = 0; i < m; i++) {
            d[i] = Long.parseLong(args[5 + i]);
        }
        long[] e = new long[n];
        for (int i = 0; i < n; i++) {
            e[i] = Long.parseLong(args[6 + i]);
        }
        long[] f = new long[m];
        for (int i = 0; i < m; i++) {
            f[i] = Long.parseLong(args[7 + i]);
        }
        long[] g = new long[n];
        for (int i = 0; i < n; i++) {
            g[i] = Long.parseLong(args[8 + i]);
        }
        long[] h = new long[m];
        for (int i = 0; i < m; i++) {
            h[i] = Long.parseLong(args[9 + i]);
        }
        long[] i = new long[n];
        for (int i = 0; i < n; i++) {
            i[i] = Long.parseLong(args[10 + i]);
        }
        long[] j = new long[m];
        for (int i = 0; i < m; i++) {
            j[i] = Long.parseLong(args[11 + i]);
        }
        long[] k = new long[n];
        for (int i = 0; i < n; i++) {
            k[i] = Long.parseLong(args[12 + i]);
        }
        long[] l = new long[n];
        for (int i = 0; i < n; i++) {
            l[i] = Long.parseLong(args[13 + i]);
        }
        long[] m = new long[n];
        for (int i = 0; i < n; i++) {
            m[i] = Long.parseLong(args[14 + i]);
        }
        long[] n = new long[n];
        for (int i = 0; i < n; i++) {
            n[i] = Long.parseLong(args[15 + i]);
        }
        long[] o = new long[n];
        for (int i = 0; i < n; i++) {
            o[i] = Long.parseLong(args[16 + i]);
        }
        long[] p = new long[n];
        for (int i = 0; i < n; i++) {
            p[i