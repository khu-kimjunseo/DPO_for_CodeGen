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
        ArrayList<Long> results = new ArrayList<Long>(Arrays.asList(0L, 0L, 2L, 0L));
        if (n < 4) {
            return results.get((int)n);
        }

        for (long i = 4; i <= n; i++) {
            results.add(results.get(3) + results.get(2) + results.get(1) + results.get(0));
            results.remove(0);
        }

        return results.get(3);
    }
    
    

}


### Python version

def fib4(n: int) -> int:
    results = [0, 0, 2, 0]
    if n < 4:
        return results[n]

    for _ in range(4, n + 1):
        results.append(results[-1] + results[-2] + results[-3] + results[-4])
        results.pop(0)

    return results[-1]
