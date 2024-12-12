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
    public static void main(String[] args) {
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)0l, (long)3l, (long)2l, (long)1l, (long)3l, (long)5l, (long)7l, (long)4l, (long)5l, (long)5l, (long)5l, (long)2l, (long)181l, (long)32l, (long)4l, (long)32l, (long)3l, (long)2l, (long)32l, (long)324l, (long)4l, (long)3l)))) == (10l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)1l, (long)0l, (long)1l, (long)8l, (long)2l, (long)4597l, (long)2l, (long)1l, (long)3l, (long)40l, (long)1l, (long)2l, (long)1l, (long)2l, (long)4l, (long)2l, (long)5l, (long)1l)))) == (25l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)1l, (long)32l, (long)5107l, (long)34l, (long)83278l, (long)109l, (long)163l, (long)23l, (long)2323l, (long)32l, (long)30l, (long)1l, (long)9l, (long)3l)))) == (13l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)0l, (long)724l, (long)32l, (long)71l, (long)99l, (long)32l, (long)6l, (long)0l, (long)5l, (long)91l, (long)83l, (long)0l, (long)5l, (long)6l)))) == (11l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)0l, (long)81l, (long)12l, (long)3l, (long)1l, (long)21l)))) == (3l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)0l, (long)8l, (long)1l, (long)2l, (long)1l, (long)7l)))) == (7l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)8191l)))) == (19l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)8191l, (long)123456l, (long)127l, (long)7l)))) == (19l));
    assert(skjkasdkd((new ArrayList<Long>(Arrays.asList((long)127l, (long)97l, (long)8192l)))) == (10l));
    }

}