### Python version

def prime_fib(n: int) -> int:
    import math
    def is_prime(p):
        if p < 2:
            return False
        for k in range(2, min(int(math.sqrt(p)) + 1, p - 1)):
            if p % k == 0:
                return False
        return True
    f = [0, 1]
    while True:
        f.append(f[-1] + f[-2])
        if is_prime(f[-1]):
            n -= 1
        if n == 0:
            return f[-1]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long primeFib(long n) {
        long prime = prime_fib(n);
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeFib(long n) {
        long prime = 1;
        for (long i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = prime * i;
            }
        }
        return prime;
    }
}

class Solution {
    public static long primeF