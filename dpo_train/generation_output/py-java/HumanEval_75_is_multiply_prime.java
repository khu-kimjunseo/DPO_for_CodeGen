### Python version

def is_multiply_prime(a: int) -> bool:
    def is_prime(n):
        for j in range(2,n):
            if n%j == 0:
                return False
        return True

    for i in range(2,101):
        if not is_prime(i): continue
        for j in range(2,101):
            if not is_prime(j): continue
            for k in range(2,101):
                if not is_prime(k): continue
                if i*j*k == a: return True
    return False

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isMultiplyPrime(long a) {
        return is_multiply_prime(a);
    }
}

class Solution {
    public static void main(String[] args) {
        long a = Long.parseLong(args[0]);
        long b = Long.parseLong(args[1]);
        long c = Long.parseLong(args[2]);
        long d = Long.parseLong(args[3]);
        long e = Long.parseLong(args[4]);
        long f = Long.parseLong(args[5]);
        long g = Long.parseLong(args[6]);
        long h = Long.parseLong(args[7]);
        long i = Long.parseLong(args[8]);
        long j = Long.parseLong(args[9]);
        long k = Long.parseLong(args[10]);
        long l = Long.parseLong(args[11]);
        long m = Long.parseLong(args[12]);
        long n = Long.parseLong(args[13]);
        long o = Long.parseLong(args[14]);
        long p = Long.parseLong(args[15]);
        long q = Long.parseLong(args[16]);
        long r = Long.parseLong(args[17]);
        long s = Long.parseLong(args[18]);
        long t = Long.parseLong(args[19]);
        long u = Long.parseLong(args[20]);
        long v = Long.parseLong(args[21]);
        long w = Long.parseLong(args[22]);
        long x = Long.parseLong(args[23]);
        long y = Long.parseLong(args[24]);
        long z = Long.parseLong(args[25]);
        long a = Long.parseLong(args[26]);
        long b = Long.parseLong(args[27]);
        long c = Long.parseLong(args[28]);
        long d = Long.parseLong(args[29]);
        long e = Long.parseLong(args[30]);
        long f = Long.parseLong(args[31]);
        long g = Long.parseLong(args[32]);
        long h = Long.parseLong(args[33]);
        long i = Long.parseLong(args[34]);
        long j = Long.parseLong(args[35]);
        long k = Long.parseLong(args[36]);
        long l = Long.parseLong(args[37]);
        long m = Long.parseLong(args[38]);
        long n = Long.parseLong(args[39]);
        long o = Long.parseLong(args[40]);
        long p = Long.parseLong(args[41]);
        long q = Long.parseLong(args[42]);
        long r = Long.parseLong(args[43]);
        long s = Long.parseLong(args[44]);
        long t = Long.parseLong(args[45]);
        long u = Long.parseLong(args[46]);
        long v = Long.parseLong(args[47]);
        long w = Long.parseLong(args[48]);
        long x = Long.parseLong(args[49]);
        long y = Long.parseLong(args[50]);
        long z = Long.parseLong(args[51]);
        long a = Long.parseLong(args[52]);
        long b = Long.parseLong(args[53]);
        long c = Long.parseLong(args