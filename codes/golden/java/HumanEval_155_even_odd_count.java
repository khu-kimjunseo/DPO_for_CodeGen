import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddCount(long num) {
        long evenCount = 0;
        long oddCount = 0;
        for (char i : Long.toString(Math.abs(num)).toCharArray()) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return Pair.with(evenCount, oddCount);
    }
    public static void main(String[] args) {
    assert(evenOddCount((7l)).equals((Pair.with(0l, 1l))));
    assert(evenOddCount((-78l)).equals((Pair.with(1l, 1l))));
    assert(evenOddCount((3452l)).equals((Pair.with(2l, 2l))));
    assert(evenOddCount((346211l)).equals((Pair.with(3l, 3l))));
    assert(evenOddCount((-345821l)).equals((Pair.with(3l, 3l))));
    assert(evenOddCount((-2l)).equals((Pair.with(1l, 0l))));
    assert(evenOddCount((-45347l)).equals((Pair.with(2l, 3l))));
    assert(evenOddCount((0l)).equals((Pair.with(1l, 0l))));
    }

}
