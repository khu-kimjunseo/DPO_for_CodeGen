import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isMultiplyPrime(long a) {
        return is_multiply_prime(a);
    }
    public static long getPrime(long a) {
        return is_multiply_prime(a) ? a : 1;
    }
    public static long getPrime(long a, long b) {
        return is_multiply_prime(a) ? a : b;
    }
    public static long getPrime(long a, long b, long c) {
        return is_multiply_prime(a) ? a : b : c;
    }
    public static long getPrime(long a, long b, long c, long d) {
        return is_multiply_prime(a) ? a : b : c : d;
    }
    public static long getPrime(long a, long b, long c, long d, long e) {
        return is_multiply_prime(a) ? a : b : c : d : e;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f) {
        return is_multiply_prime(a) ? a : b : c : d : e : f;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g) {
        return is_multiply_prime(a) ? a : b : c : d : e : f : g;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g, long h) {
        return is_multiply_prime(a) ? a : b : c : d : e : f : g : h;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g, long h, long i) {
        return is_multiply_prime(a) ? a : b : c : d : e : f : g : h : i;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j) {
        return is_multiply_prime(a) ? a : b : c : d : e : f : g : h : i : j;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j, long k) {
        return is_multiply_prime(a) ? a : b : c : d : e : f : g : h : i : j : k;
    }
    public static long getPrime(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j, long k, long l) {
        return is_multiply_prime(a) ? a : b : c
    public static void main(String[] args) {
    assert(isMultiplyPrime((5l)) == (false));
    assert(isMultiplyPrime((30l)) == (true));
    assert(isMultiplyPrime((8l)) == (true));
    assert(isMultiplyPrime((10l)) == (false));
    assert(isMultiplyPrime((125l)) == (true));
    assert(isMultiplyPrime((105l)) == (true));
    assert(isMultiplyPrime((126l)) == (false));
    assert(isMultiplyPrime((729l)) == (false));
    assert(isMultiplyPrime((891l)) == (false));
    assert(isMultiplyPrime((1001l)) == (true));
    }

}
