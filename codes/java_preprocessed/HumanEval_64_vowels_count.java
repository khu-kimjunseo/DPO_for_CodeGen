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
