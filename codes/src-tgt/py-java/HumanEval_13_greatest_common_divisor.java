### Python version

def greatest_common_divisor(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long greatestCommonDivisor(long a, long b) {
        while (b != 0) {
            long t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
    

}

