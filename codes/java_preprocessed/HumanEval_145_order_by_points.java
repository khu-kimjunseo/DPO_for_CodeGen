import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> orderByPoints(ArrayList<Long> nums) {
        return nums.stream().sorted((a, b) -> Long.compare(digitsSum(a), digitsSum(b))).collect(Collectors.toCollection(ArrayList::new));
    }
    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String s = Long.toString(n);
        long[] digits = new long[s.length()];
        for (int i = 0; i < s.length(); i++) {
            digits[i] = s.charAt(i) - '0';
        }
        digits[0] *= neg;
        return Arrays.stream(digits).sum();
    }
    

}
