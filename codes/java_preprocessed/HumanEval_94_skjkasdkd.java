import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long skjkasdkd(ArrayList<Long> lst) {
        long maxx = 0;
        for (long i : lst) {
            if (i > maxx && isPrime(i)) {
                maxx = i;
            }
        }
        return Long.toString(maxx).chars().map(c -> c - '0').sum();
    }

    private static boolean isPrime(long n) {
        for (long i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    

}
