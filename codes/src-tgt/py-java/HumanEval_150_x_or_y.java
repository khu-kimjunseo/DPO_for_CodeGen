### Python version

def x_or_y(n: int, x: int, y: int) -> int:
    if n == 1:
        return y
    for i in range(2, n):
        if n % i == 0:
            return y
            break
    else:
        return x

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long xOrY(long n, long x, long y) {
        if (n == 1) {
            return y;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return y;
            }
        }
        return x;
    }
    

}

