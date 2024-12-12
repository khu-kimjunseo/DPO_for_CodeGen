### Python version

from typing import Tuple

def intersection(interval1: Tuple[int, int], interval2: Tuple[int, int]) -> str:
    def is_prime(num):
        if num == 1 or num == 0:
            return False
        if num == 2:
            return True
        for i in range(2, num):
            if num%i == 0:
                return False
        return True

    l = max(interval1[0], interval2[0])
    r = min(interval1[1], interval2[1])
    length = r - l
    if length > 0 and is_prime(length):
        return "YES"
    return "NO"

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String intersection(Pair<Long, Long> interval1, Pair<Long, Long> interval2) {
        return "YES" if intersection(interval1.first, interval2.first) and intersection(interval1.second, interval2.second) else "NO";
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        long[] a = new long[n];
        long[] b = new long[m];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
        }
        for (int i = 0; i < m; i++) {
            b[i] = in.nextLong();
        }
        long[] result = Problem.intersection(a, b);
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        for (int i = 0; i < m; i++) {
            System.out.print(b[i] + " ");
        }
        System.out.println();
        for (int i = 0; i < n; i++) {
            System.out.print(result[i] + " ");
        }
        System.out.println();
    }
}
