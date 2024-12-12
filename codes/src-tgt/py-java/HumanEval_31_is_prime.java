### Python version

def is_prime(n:int) -> bool:
    if n < 2:
        return False
    for k in range(2, n - 1):
        if n % k == 0:
            return False
    return True

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPrime(long n) {
        if (n < 2) {
            return false;
        }
        for (long k = 2; k < n; k++) {
            if (n % k == 0) {
                return false;
            }
        }
        return true;
    }
    

}

