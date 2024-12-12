### Python version

def valid_date(date: str) -> bool:
    try:
        date = date.strip()
        month, day, year = date.split('-')
        month, day, year = int(month), int(day), int(year)
        if month < 1 or month > 12:
            return False
        if month in [1,3,5,7,8,10,12] and day < 1 or day > 31:
            return False
        if month in [4,6,9,11] and day < 1 or day > 30:
            return False
        if month == 2 and day < 1 or day > 29:
            return False
    except:
        return False

    return True

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean validDate(String date) {
        return valid_date(date);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] b = new int[m];
        for (int i = 0; i < m; i++) {
            b[i] = in.nextInt();
        }
        int[] c = new int[k];
        for (int i = 0; i < k; i++) {
            c[i] = in.nextInt();
        }
        int[] d = new int[n];
        for (int i = 0; i < n; i++) {
            d[i] = in.nextInt();
        }
        int[] e = new int[m];
        for (int i = 0; i < m; i++) {
            e[i] = in.nextInt();
        }
        int[] f = new int[k];
        for (int i = 0; i < k; i++) {
            f[i] = in.nextInt();
        }
        int[] g = new int[n];
        for (int i = 0; i < n; i++) {
            g[i] = in.nextInt();
        }
        int[] h = new int[n];
        for (int i = 0; i < n; i++) {
            h[i] = in.nextInt();
        }
        int[] i = new int[n];
        for (int i = 0; i < n; i++) {
            i[i] = in.nextInt();
        }
        int[] j = new int[n];
        for (int i = 0; i < n; i++) {
            j[i] = in.nextInt();
        }
        int[] k = new int[n];
        for (int i = 0; i < n; i++) {
            k[i] = in.nextInt();
        }
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = in.nextInt();
        }
        int[] m = new int[n];
        for (int i = 0; i < n; i++) {
            m[i] = in.nextInt();
        }
        int[] n = new int[n];
        for (int i = 0; i < n; i++) {
            n[i] = in.nextInt();
        }
        int[] o = new int[n];
        for (int i = 0; i < n; i++) {
            o[i] = in.nextInt();
        }
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = in.nextInt();
        }
        int[] q = new int[n];
        for (int i = 0; i < n; i++) {
            q