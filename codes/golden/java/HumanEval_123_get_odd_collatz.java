import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getOddCollatz(long n) {
        ArrayList<Long> oddCollatz = new ArrayList<Long>();
        if (n % 2 == 1) {
            oddCollatz.add(n);
        }
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = n * 3 + 1;
            }
            if (n % 2 == 1) {
                oddCollatz.add(n);
            }
        }
        oddCollatz.sort(null);
        return oddCollatz;
    }
    public static void main(String[] args) {
    assert(getOddCollatz((14l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l)))));
    assert(getOddCollatz((5l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l)))));
    assert(getOddCollatz((12l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)5l)))));
    assert(getOddCollatz((1l)).equals((new ArrayList<Long>(Arrays.asList((long)1l)))));
    }

}
