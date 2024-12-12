import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isMultiplyPrime(long a) {
        for (int i = 2; i < 101; i++) {
            if (!isPrime(i)) continue;
            for (int j = 2; j < 101; j++) {
                if (!isPrime(j)) continue;
                for (int k = 2; k < 101; k++) {
                    if (!isPrime(k)) continue;
                    if (i*j*k == a) return true;
                }
            }
        }
        return false;
    }
    public static boolean isPrime(int n) {
        for (int j = 2; j < n; j++) {
            if (n%j == 0) return false;
        }
        return true;
    }
    

}
