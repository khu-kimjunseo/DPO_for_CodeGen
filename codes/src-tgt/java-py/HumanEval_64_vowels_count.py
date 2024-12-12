### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long vowelsCount(String s) {
        String vowels = "aeiouAEIOU";
        long nVowels = s.chars().filter(c -> vowels.indexOf(c) != -1).count();
        if (s.charAt(s.length()-1) == 'y' || s.charAt(s.length()-1) == 'Y') {
            nVowels++;
        }
        return nVowels;
    }
    

}


### Python version

def vowels_count(s: str) -> int:
    vowels = "aeiouAEIOU"
    n_vowels = sum(c in vowels for c in s)
    if s[-1] == 'y' or s[-1] == 'Y':
        n_vowels += 1
    return n_vowels
