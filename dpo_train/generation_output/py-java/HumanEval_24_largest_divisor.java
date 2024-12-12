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
        return Long.valueOf(largest_divisor(n));
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long result = Problem.largestDivisor(n);
        System.out.println(result);
    }
}
