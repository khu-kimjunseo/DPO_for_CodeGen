### Python version

from typing import Tuple

def even_odd_palindrome(n: int) -> Tuple[int, int]:
    def is_palindrome(n):
        return str(n) == str(n)[::-1]

    even_palindrome_count = 0
    odd_palindrome_count = 0

    for i in range(1, n+1):
        if i%2 == 1 and is_palindrome(i):
                odd_palindrome_count += 1
        elif i%2 == 0 and is_palindrome(i):
            even_palindrome_count += 1
    return (even_palindrome_count, odd_palindrome_count)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddPalindrome(long n) {
        long odd_count = 0;
        long even_count = 0;
        long result = 0;
        for (long i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                odd_count += 1;
            } else {
                even_count += 1;
            }
            result += i;
        }
        return Pair.of(result, odd_count + even_count);
    }
}

class Solution {
    public static void main(String[] args) {
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
        long[] l = new long[m];
        for (int i = 0; i < m; i++) {
            l[i] = Long.parseLong(args[13 + i]);
        }
        long[] m = new long[n];
        for (int i = 0; i < n; i++) {
            m[i] = Long.parse