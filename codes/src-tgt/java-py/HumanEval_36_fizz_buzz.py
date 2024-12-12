### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fizzBuzz(long n) {
        List<Long> ns = new ArrayList<>();
        for (long i = 0; i < n; i++) {
            if (i % 11 == 0 || i % 13 == 0) {
                ns.add(i);
            }
        }
        long s = ns.stream().map(i -> String.valueOf(i)).flatMapToInt(String::chars).filter(c -> c == '7').count();
        return s;
    }
    
    

}


### Python version

def fizz_buzz(n: int) -> int:
    ns = []
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            ns.append(i)
    s = ''.join(list(map(str, ns)))
    ans = 0
    for c in s:
        ans += (c == '7')
    return ans
