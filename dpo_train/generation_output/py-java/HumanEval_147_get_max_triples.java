### Python version

def get_max_triples(n: int) -> int:
    A = [i*i - i + 1 for i in range(1,n+1)]
    ans = []
    for i in range(n):
        for j in range(i+1,n):
            for k in range(j+1,n):
                if (A[i]+A[j]+A[k])%3 == 0:
                    ans += [(A[i],A[j],A[k])]
    return len(ans)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long getMaxTriples(long n) {
        return getMaxTriples(n, n);
    }

    public static long getMaxTriples(long n, long m) {
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (i+1)*(i+1) - (i+1)*(i+1) + (i+1)*(i+1) + (i+1)*(i+1);
        }
        for (int i = 0; i < m; i++) {
            ans += (i+1)*(i+1) - (i+1)*(i+1) + (i+1)*(i+1) + (i+1)*(i+1);
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long ans = Problem.getMaxTriples(n);
        System.out.println(ans);
    }
}
