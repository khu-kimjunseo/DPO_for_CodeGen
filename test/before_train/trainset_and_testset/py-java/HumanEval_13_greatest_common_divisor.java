import java.util.*;
import java.lang.reflect.*;
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
    public static void main(String[] args) {
    assert(greatestCommonDivisor((3l), (7l)) == (1l));
    assert(greatestCommonDivisor((10l), (15l)) == (5l));
    assert(greatestCommonDivisor((49l), (14l)) == (7l));
    assert(greatestCommonDivisor((144l), (60l)) == (12l));
    }

}
