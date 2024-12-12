import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String getClosestVowel(String word) {
        return getClosestVowel(word, word.length());
    }

    public static String getClosestVowel(String word, int length) {
        if (length < 3) {
            return word;
        }

        String[] words = word.split("");
        String[] vowels = {"a", "e", "i", "o", "u", "A", "E", 'O', 'U', 'I'};
        int index = 0;
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() < length) {
                continue;
            }
            if (words[i].length() == length) {
                index = i;
                break;
            }
            if (words[i].length() == length - 1) {
                index = i;
                break;
            }
            if (words[i].length() == length - 2) {
                index = i;
                break;
            }
            if (words[i].length() == length - 3) {
                index = i;
                break;
            }
            if (words[i].length() == length - 4) {
                index = i;
                break;
            }
            if (words[i].length() == length - 5) {
                index = i;
                break;
            }
            if (words[i].length() == length - 6) {
                index = i;
                break;
            }
            if (words[i].length() == length - 7) {
                index = i;
                break;
            }
            if (words[i].length() == length - 8) {
                index = i;
                break;
            }
            if (words[i].length() == length - 9) {
                index = i;
                break;
            }
            if (words[i].length() == length - 10) {
                index = i;
                break;
            }
            if (words[i].length() == length - 11) {
                index = i;
                break;
            }
            if (words[i].length() == length - 12) {
                index = i;
                break;
            }
            if (words[i].length() == length - 13) {
                index = i;
                break;
            }
            if (words[i].length() == length - 14) {
                index = i;
                break;
            }
            if (words[i].length() == length - 15) {
                index = i;
                break;
            }
            if (words[i].length() == length - 16) {
                index = i;
                break;
            }
            if (words[i].length() == length - 17) {
                index = i;
                break;
            }
            if (words[i].length() == length - 18) {
                index = i;
                break;
            }
            if (words[i].length() == length - 19) {
                index = i;
                break;
            }
            if (words[i].length() == length - 20) {
                index = i;
                break;
            }
            if (words[i].length() == length - 21) {
                
    public static void main(String[] args) {
    assert(getClosestVowel(("yogurt")).equals(("u")));
    assert(getClosestVowel(("full")).equals(("u")));
    assert(getClosestVowel(("easy")).equals(("")));
    assert(getClosestVowel(("eAsy")).equals(("")));
    assert(getClosestVowel(("ali")).equals(("")));
    assert(getClosestVowel(("bad")).equals(("a")));
    assert(getClosestVowel(("most")).equals(("o")));
    assert(getClosestVowel(("ab")).equals(("")));
    assert(getClosestVowel(("ba")).equals(("")));
    assert(getClosestVowel(("quick")).equals(("")));
    assert(getClosestVowel(("anime")).equals(("i")));
    assert(getClosestVowel(("Asia")).equals(("")));
    assert(getClosestVowel(("Above")).equals(("o")));
    }

}
