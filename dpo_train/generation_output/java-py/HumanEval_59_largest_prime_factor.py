### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestPrimeFactor(long n) {
        long largest = 1;
        for (long j = 2; j <= n; j++) {
            if (n % j == 0 && isPrime(j)) {
                largest = Math.max(largest, j);
            }
        }
        return largest;
    }
    public static boolean isPrime(long k) {
        if (k < 2) return false;
        for (long i = 2; i < k; i++) {
            if (k % i == 0) return false;
        }
        return true;
    }
}

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int) -> int:
    return Problem.largestPrimeFactor(n)

### Java version

def largest_prime_factor(n: long) -> long:
    return Problem.largestPrimeFactor(n)

### Python version

def largest_prime_factor(n: int