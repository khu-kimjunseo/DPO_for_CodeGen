import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> generateIntegers(long a, long b) {
        long lower = Math.max(2, Math.min(a, b));
        long upper = Math.min(8, Math.max(a, b));
        ArrayList<Long> res = new ArrayList<>();
        for (long i = lower; i <= upper; i++) {
            if (i % 2 == 0) {
                res.add(i);
            }
        }
        return res;
    }
    

}
