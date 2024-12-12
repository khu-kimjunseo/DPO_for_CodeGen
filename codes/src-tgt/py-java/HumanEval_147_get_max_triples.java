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
        long ans = 0;
        long[] A = new long[(int)n+1];
        for (int i = 1; i <= n; i++) {
            A[i] = i*i-i+1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                for (int k = j+1; k <= n; k++) {
                    if ((A[i]+A[j]+A[k])%3 == 0) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
    
    

}

