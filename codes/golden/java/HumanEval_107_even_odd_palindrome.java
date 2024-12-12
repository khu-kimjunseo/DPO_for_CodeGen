import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddPalindrome(long n) {
        long evenPalindromeCount = 0;
        long oddPalindromeCount = 0;

        for (long i = 1; i <= n; i++) {
            if (i % 2 == 1 & & isPalindrome(i)) {
                oddPalindromeCount++;
            } else if (i % 2 == 0 & & isPalindrome(i)) {
                evenPalindromeCount++;
            }
        }
        return Pair.with(evenPalindromeCount, oddPalindromeCount);
    }

    private static boolean isPalindrome(long n) {
        return Long.toString(n).equals(new StringBuilder(Long.toString(n)).reverse().toString());
    }
    public static void main(String[] args) {
    assert(evenOddPalindrome((123l)).equals((Pair.with(8l, 13l))));
    assert(evenOddPalindrome((12l)).equals((Pair.with(4l, 6l))));
    assert(evenOddPalindrome((3l)).equals((Pair.with(1l, 2l))));
    assert(evenOddPalindrome((63l)).equals((Pair.with(6l, 8l))));
    assert(evenOddPalindrome((25l)).equals((Pair.with(5l, 6l))));
    assert(evenOddPalindrome((19l)).equals((Pair.with(4l, 6l))));
    assert(evenOddPalindrome((9l)).equals((Pair.with(4l, 5l))));
    assert(evenOddPalindrome((1l)).equals((Pair.with(0l, 1l))));
    }

}
