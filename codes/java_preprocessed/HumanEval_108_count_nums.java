import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countNums(ArrayList<Long> arr) {
        return arr.stream().map(i -> digitsSum(i)).filter(i -> i > 0).count();
    }

    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String[] digits = Long.toString(n).split("");
        digits[0] = Long.toString(Long.parseLong(digits[0]) * neg);
        return Arrays.stream(digits).mapToLong(Long::parseLong).sum();
    }
    

}
