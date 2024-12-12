### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isSimplePower(long x, long n) {
        if (n == 1) return (x == 1);
        long power = 1;
        while (power < x) power = power * n;
        return (power == x);
    }
    
}

### Python version

def is_simple_power(x: int, n: int) -> bool:
    if (n == 1) return (x == 1);
    if (n == 2) return (x == x * x);
    if (n == 3) return (x == x * x * x);
    if (n == 4) return (x == x * x * x * x);
    if (n == 5) return (x == x * x * x * x * x);
    if (n == 6) return (x == x * x * x * x * x * x);
    if (n == 7) return (x == x * x * x * x * x * x * x);
    if (n == 8) return (x == x * x * x * x * x * x * x * x);
    if (n == 9) return (x == x * x * x * x * x * x * x * x * x);
    if (n == 10) return (x == x * x * x * x * x * x * x * x * x * x);
    if (n == 11) return (x == x * x * x * x * x * x * x * x * x * x * x);
    if (n == 12) return (x == x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 13) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 14) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 15) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 16) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 17) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 18) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 19) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 20) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 21) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 22) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 23) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
    if (n == 24) return (x == x * x * x * x * x * x * x * x * x * x * x * x * x * x