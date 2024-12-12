import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> factorize(long n) {
        ArrayList<Long> fact = new ArrayList<>();
        long i = 2;
        while (i <= n) {
            if (n % i == 0) {
                fact.add(i);
                n /= i;
            } else {
                i++;
            }
        }
        return fact;
    }
    

}
