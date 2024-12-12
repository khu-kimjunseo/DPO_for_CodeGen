import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isEqualToSumEven(long n) {
        return is_equal_to_sum_even(n);
    }
    public static long sumEven(long n) {
        return is_equal_to_sum_even(n) ? n : 0;
    }
    public static long sumEven(long n, long m) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5, long m5) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5, long m5, long n6) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5, long m5, long n6, long m6) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5, long m5, long n6, long m6, long n7) {
        return is_equal_to_sum_even(n) ? n : m;
    }
    public static long sumEven(long n, long m, long n2, long m2, long n3, long m3, long n4, long m4, long n5, long m5, long n6, long m6, long n7, long m7) {
        return is_equal_to_sum_even(n) ? n :
    public static void main(String[] args) {
    assert(isEqualToSumEven((4l)) == (false));
    assert(isEqualToSumEven((6l)) == (false));
    assert(isEqualToSumEven((8l)) == (true));
    assert(isEqualToSumEven((10l)) == (true));
    assert(isEqualToSumEven((11l)) == (false));
    assert(isEqualToSumEven((12l)) == (true));
    assert(isEqualToSumEven((13l)) == (false));
    assert(isEqualToSumEven((16l)) == (true));
    }

}
