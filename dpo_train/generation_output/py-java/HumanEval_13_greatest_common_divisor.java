### Python version

def greatest_common_divisor(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long greatestCommonDivisor(long a, long b) {
        return greatestCommonDivisor(a, b, 0);
    }

    public static long greatestCommonDivisor(long a, long b, long c) {
        if (a == 0) {
            return b;
        }
        if (b == 0) {
            return c;
        }
        if (c == 0) {
            return greatestCommonDivisor(a, b, c);
        }
        long d = greatestCommonDivisor(a, b, c);
        long e = greatestCommonDivisor(b, c, d);
        return greatestCommonDivisor(d, e);
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
        long z = Long.parseLong(args[