### Python version

from typing import Tuple

def intersection(interval1: Tuple[int, int], interval2: Tuple[int, int]) -> str:
    def is_prime(num):
        if num == 1 or num == 0:
            return False
        if num == 2:
            return True
        for i in range(2, num):
            if num%i == 0:
                return False
        return True

    l = max(interval1[0], interval2[0])
    r = min(interval1[1], interval2[1])
    length = r - l
    if length > 0 and is_prime(length):
        return "YES"
    return "NO"

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String intersection(Pair<Long, Long> interval1, Pair<Long, Long> interval2) {
        long l = Math.max(interval1.getValue0(), interval2.getValue0());
        long r = Math.min(interval1.getValue1(), interval2.getValue1());
        long length = r - l;
        if (length > 0 && isPrime(length)) {
            return "YES";
        }
        return "NO";
    }

    private static boolean isPrime(long n) {
        if (n == 1 || n == 0) {
            return false;
        }
        if (n == 2) {
            return true;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    

}

