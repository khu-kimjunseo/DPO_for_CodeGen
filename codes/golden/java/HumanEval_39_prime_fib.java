import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long primeFib(long n) {
        int[] f = {0, 1};
        while (true) {
            int next = f[0] + f[1];
            f[0] = f[1];
            f[1] = next;
            if (isPrime(next)) {
                n--;
            }
            if (n == 0) {
                return next;
            }
        }
    }
    private static boolean isPrime(int p) {
        if (p < 2) {
            return false;
        }
        for (int k = 2; k <= Math.min((int)Math.sqrt(p) + 1, p - 1); k++) {
            if (p % k == 0) {
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
    assert(primeFib((1l)) == (2l));
    assert(primeFib((2l)) == (3l));
    assert(primeFib((3l)) == (5l));
    assert(primeFib((4l)) == (13l));
    assert(primeFib((5l)) == (89l));
    assert(primeFib((6l)) == (233l));
    assert(primeFib((7l)) == (1597l));
    assert(primeFib((8l)) == (28657l));
    assert(primeFib((9l)) == (514229l));
    assert(primeFib((10l)) == (433494437l));
    }

}
