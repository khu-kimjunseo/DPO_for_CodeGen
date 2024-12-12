### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long skjkasdkd(ArrayList<Long> lst) {
        long maxx = 0;
        for (long i : lst) {
            if (i > maxx && isPrime(i)) {
                maxx = i;
            }
        }
        return Long.toString(maxx).chars().map(c -> c - '0').sum();
    }

    private static boolean isPrime(long n) {
        for (long i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    

}


### Python version

from typing import List

def skjkasdkd(lst: List[int]) -> int:
    def isPrime(n):
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False

        return True
    maxx = 0
    i = 0
    while i < len(lst):
        if(lst[i] > maxx and isPrime(lst[i])):
            maxx = lst[i]
        i+=1
    result = sum(int(digit) for digit in str(maxx))
    return result
