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
    public static void main(String[] args) {
    assert(countNums((new ArrayList<Long>(Arrays.asList()))) == (0l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-2l, (long)0l)))) == (0l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)2l, (long)-2l, (long)3l, (long)4l, (long)5l)))) == (6l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)1l, (long)6l, (long)9l, (long)-6l, (long)0l, (long)1l, (long)5l)))) == (5l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)1l, (long)100l, (long)98l, (long)-7l, (long)1l, (long)-1l)))) == (4l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)12l, (long)23l, (long)34l, (long)-45l, (long)-56l, (long)0l)))) == (5l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)0l, (long)1l)))) == (1l));
    assert(countNums((new ArrayList<Long>(Arrays.asList((long)1l)))) == (1l));
    }

}
