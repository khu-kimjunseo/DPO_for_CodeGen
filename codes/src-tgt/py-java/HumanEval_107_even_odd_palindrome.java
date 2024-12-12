### Python version

from typing import Tuple

def even_odd_palindrome(n: int) -> Tuple[int, int]:
    def is_palindrome(n):
        return str(n) == str(n)[::-1]

    even_palindrome_count = 0
    odd_palindrome_count = 0

    for i in range(1, n+1):
        if i%2 == 1 and is_palindrome(i):
                odd_palindrome_count += 1
        elif i%2 == 0 and is_palindrome(i):
            even_palindrome_count += 1
    return (even_palindrome_count, odd_palindrome_count)

### Java version

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

