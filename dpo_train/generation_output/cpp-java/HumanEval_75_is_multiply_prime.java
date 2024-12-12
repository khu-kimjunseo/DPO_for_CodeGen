### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_multiply_prime(long a) {
    auto is_prime = [&](long n) {
        for (long j = 2; j < n; j++) {
            if (n % j == 0) {
                return false;
            }
        }
        return true;
    };
    for (long i = 2; i <= 100; i++) {
        if (!is_prime(i)) continue;
        for (long j = 2; j <= 100; j++) {
            if (!is_prime(j)) continue;
            for (long k = 2; k <= 100; k++) {
                if (!is_prime(k)) continue;
                if (i * j * k == a) return true;
            }
        }
    }
    return false;
}

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