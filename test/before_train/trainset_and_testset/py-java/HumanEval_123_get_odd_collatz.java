import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getOddCollatz(long n) {
        ArrayList<Long> odd_collatz = new ArrayList<>();
        if (n == 1) {
            odd_collatz.add(1L);
        } else {
            for (int i = 1; i < n; i++) {
                odd_collatz.add(i);
            }
        }
        return odd_collatz;
    }
    public static void main(String[] args) {
    assert(getOddCollatz((14l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l)))));
    assert(getOddCollatz((5l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l)))));
    assert(getOddCollatz((12l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)5l)))));
    assert(getOddCollatz((1l)).equals((new ArrayList<Long>(Arrays.asList((long)1l)))));
    }

}