import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean iscube(long a) {
        return iscube(a >> 32);
    }
    public static boolean iscube(int a) {
        return iscube(a >> 32);
    }
    public static boolean iscube(long a, long b) {
        return iscube(a >> 32, b >> 32);
    }
    public static boolean iscube(int a, int b) {
        return iscube(a >> 32, b >> 32);
    }
    public static boolean iscube(long a, long b, long c) {
        return iscube(a >> 32, b >> 32, c >> 32);
    }
    public static boolean iscube(int a, int b, int c) {
        return iscube(a >> 32, b >> 32, c >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32);
    }
    public static boolean iscube(int a, int b, int c, int d) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d, long e) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32);
    }
    public static boolean iscube(int a, int b, int c, int d, int e) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d, long e, long f) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32);
    }
    public static boolean iscube(int a, int b, int c, int d, int e, int f, int g) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32, g >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d, long e, long f, long g, long h) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32, g >> 32, h >> 32);
    }
    public static boolean iscube(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32, g >> 32, h >> 32, i >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32, g >> 32, h >> 32, i >> 32, j >> 32);
    }
    public static boolean iscube(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k) {
        return iscube(a >> 32, b >> 32, c >> 32, d >> 32, e >> 32, f >> 32, g >> 32, h >> 32, i >> 32, j >> 32, k >> 32);
    }
    public static boolean iscube(long a, long b, long c, long d, long e, long f, long g, long h, long i, long j, long k, long l) {
        return iscube(a >> 32, b >> 32, c
    public static void main(String[] args) {
    assert(iscube((1l)) == (true));
    assert(iscube((2l)) == (false));
    assert(iscube((-1l)) == (true));
    assert(iscube((64l)) == (true));
    assert(iscube((180l)) == (false));
    assert(iscube((1000l)) == (true));
    assert(iscube((0l)) == (true));
    assert(iscube((1729l)) == (false));
    }

}
