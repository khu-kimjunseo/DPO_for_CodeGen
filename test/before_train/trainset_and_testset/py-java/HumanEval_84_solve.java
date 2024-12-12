import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(long N) {
        return solve(N, "0");
    }

    public static String solve(long N, String s) {
        return solve(N, s, "0");
    }

    public static String solve(long N, String s, String t) {
        return solve(N, s, t, "0");
    }

    public static String solve(long N, String s, String t, String t2) {
        return solve(N, s, t, t2, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3) {
        return solve(N, s, t, t2, t3, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4) {
        return solve(N, s, t, t2, t3, t4, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5) {
        return solve(N, s, t, t2, t3, t4, t5, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6) {
        return solve(N, s, t, t2, t3, t4, t5, t6, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7, String t8) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, t8, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7, String t8, String t9) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, t8, t9, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7, String t8, String t9, String t10) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, t8, t9, t10, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7, String t8, String t9, String t10, String t11) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, "0");
    }

    public static String solve(long N, String s, String t, String t2, String t3, String t4, String t5, String t6, String t7, String t8, String t9, String t10, String t11, String t12) {
        return solve(N, s, t, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, "0");
    
    public static void main(String[] args) {
    assert(solve((1000l)).equals(("1")));
    assert(solve((150l)).equals(("110")));
    assert(solve((147l)).equals(("1100")));
    assert(solve((333l)).equals(("1001")));
    assert(solve((963l)).equals(("10010")));
    }

}
