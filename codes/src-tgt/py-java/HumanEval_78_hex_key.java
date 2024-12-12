### Python version

def hex_key(num: str) -> int:
    primes = ('2', '3', '5', '7', 'B', 'D')
    total = 0
    for i in range(0, len(num)):
        if num[i] in primes:
            total += 1
    return total

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long hexKey(String num) {
        String primes = "2357BD";
        long total = 0;
        for (int i = 0; i < num.length(); i++) {
            if (primes.indexOf(num.charAt(i)) >= 0) {
                total++;
            }
        }
        return total;
    }
    

}

