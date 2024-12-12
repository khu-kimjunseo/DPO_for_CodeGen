### Python version

def is_simple_power(x: int, n: int) -> bool:
    if (n == 1): 
        return (x == 1) 
    power = 1
    while (power < x): 
        power = power * n 
    return (power == x)

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

