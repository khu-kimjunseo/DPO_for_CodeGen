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
