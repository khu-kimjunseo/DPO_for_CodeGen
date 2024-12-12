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
    

}
