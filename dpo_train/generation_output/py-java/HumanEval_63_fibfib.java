### Python version

def fibfib(n: int) -> int:
    if n == 0:
        return 0
    if n == 1:
        return 0
    if n == 2:
        return 1
    return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fibfib(long n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] fibs = new long[n];
        for (int i = 0; i < n; i++) {
            fibs[i] = in.nextLong();
        }
        System.out.println(Problem.fibfib(n));
    }
}
