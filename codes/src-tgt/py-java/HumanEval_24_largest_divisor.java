### Python version

def largest_divisor(n: int) -> int:
    for i in reversed(range(n)):
        if n % i == 0:
            return i

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestDivisor(long n) {
        for (long i = n-1; i >= 1; i--) {
            if (n % i == 0) {
                return i;
            }
        }
        return 1;
    }
    

}

