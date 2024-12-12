### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String makePalindrome(String string) {
        if (string.isEmpty()) {
            return "";
        }
        int beginningOfSuffix = 0;
        while (!string.substring(beginningOfSuffix).equals(new StringBuilder(string.substring(beginningOfSuffix)).reverse().toString())) {
            beginningOfSuffix++;
        }
        return string + new StringBuilder(string.substring(0, beginningOfSuffix)).reverse().toString();
    }
    

}


### Python version

def make_palindrome(string: str) -> str:
    if not string:
        return ''

    beginning_of_suffix = 0

    while string[beginning_of_suffix:] != string[beginning_of_suffix:][::-1]:
        beginning_of_suffix += 1

    return string + string[:beginning_of_suffix][::-1]