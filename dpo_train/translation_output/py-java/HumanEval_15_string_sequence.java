import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringSequence(long n) {
        return string_sequence(n, n);
    }

    public static String stringSequence(long n, long m) {
        return string_sequence(n, m, n);
    }

    public static String stringSequence(long n, long m, long n2) {
        return string_sequence(n, m, n2, n2);
    }

    public static String stringSequence(long n, long m, long n2, long n3) {
        return string_sequence(n, m, n2, n3, n3);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4) {
        return string_sequence(n, m, n2, n3, n4);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5) {
        return string_sequence(n, m, n2, n3, n4, n5);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6) {
        return string_sequence(n, m, n2, n3, n4, n5, n6);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7, n8);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8, long n9) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7, n8, n9);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8, long n9, long n10) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7, n8, n9, n10);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8, long n9, long n10, long n11) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8, long n9, long n10, long n11, long n12) {
        return string_sequence(n, m, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12);
    }

    public static String stringSequence(long n, long m, long n2, long n3, long n4, long n5, long n6, long n7, long n8, long n9, long n10, long n11, long n12, long n13)
    public static void main(String[] args) {
    assert(stringSequence((0l)).equals(("0")));
    assert(stringSequence((3l)).equals(("0 1 2 3")));
    assert(stringSequence((10l)).equals(("0 1 2 3 4 5 6 7 8 9 10")));
    }

}
