### Python version

def fizz_buzz(n: int) -> int:
    ns = []
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            ns.append(i)
    s = ''.join(list(map(str, ns)))
    ans = 0
    for c in s:
        ans += (c == '7')
    return ans

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fizzBuzz(long n) {
        long ans = 0;
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            ans += fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            ans += fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            ans += fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            ans += fizzBuzz(n / 7);
        }
        if (n % 11 == 0) {
            ans += fizzBuzz(n / 11);
        }
        if (n % 13 == 0) {
            ans += fizzBuzz(n / 13);
        }
        return ans;
    }
}

class Solution {
    public int fizzBuzz(int n) {
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            return fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            return fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            return fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            return fizzBuzz(n / 7);
        }
        if (n % 11 == 0) {
            return fizzBuzz(n / 11);
        }
        return fizzBuzz(n / 13);
    }
}

class Solution {
    public int fizzBuzz(int n) {
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            return fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            return fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            return fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            return fizzBuzz(n / 7);
        }
        if (n % 11 == 0) {
            return fizzBuzz(n / 11);
        }
        return fizzBuzz(n / 13);
    }
}

class Solution {
    public int fizzBuzz(int n) {
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            return fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            return fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            return fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            return fizzBuzz(n / 7);
        }
        if (n % 11 == 0) {
            return fizzBuzz(n / 11);
        }
        return fizzBuzz(n / 13);
    }
}

class Solution {
    public int fizzBuzz(int n) {
        if (n == 0) {
            return 1;
        }
        if (n % 2 == 0) {
            return fizzBuzz(n / 2);
        }
        if (n % 3 == 0) {
            return fizzBuzz(n / 3);
        }
        if (n % 5 == 0) {
            return fizzBuzz(n / 5);
        }
        if (n % 7 == 0) {
            return fizzBuzz(n / 7);
