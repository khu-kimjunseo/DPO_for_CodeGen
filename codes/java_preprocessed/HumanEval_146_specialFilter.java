import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long specialFilter(ArrayList<Long> nums) {
        long count = 0;
        for (long num : nums) {
            if (num > 10) {
                if (isOdd(num / (long) Math.pow(10, (long) Math.log10(num))) && isOdd(num % 10)) {
                    count++;
                }
            }
        }
        return count;
    }

    private static boolean isOdd(long n) {
        return n % 2 == 1;
    }
    

}
