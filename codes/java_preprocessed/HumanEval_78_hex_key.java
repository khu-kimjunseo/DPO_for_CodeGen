import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long hexKey(String num) {
        String primes = "2357BD";
        long total = 0;
        for (int i = 0; i < num.length(); i++) {
            if (primes.indexOf(num.charAt(i)) >= 0) {
                total++;
            }
        }
        return total;
    }
    

}
