import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long vowelsCount(String s) {
        long n_vowels = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'y' || s.charAt(i) == 'Y') {
                n_vowels += 1;
            }
        }
        return n_vowels;
    }
    public static void main(String[] args) {
    assert(vowelsCount(("abcde")) == (2l));
    assert(vowelsCount(("Alone")) == (3l));
    assert(vowelsCount(("key")) == (2l));
    assert(vowelsCount(("bye")) == (1l));
    assert(vowelsCount(("keY")) == (2l));
    assert(vowelsCount(("bYe")) == (1l));
    assert(vowelsCount(("ACEDY")) == (3l));
    }

}
