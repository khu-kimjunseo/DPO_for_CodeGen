import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String removeVowels(String text) {
        return text.replaceAll("[^a-zA-Z]", "");
    }
    public static void main(String[] args) {
    assert(removeVowels(("")).equals(("")));
    assert(removeVowels(("abcdef\nghijklm")).equals(("bcdf\nghjklm")));
    assert(removeVowels(("fedcba")).equals(("fdcb")));
    assert(removeVowels(("eeeee")).equals(("")));
    assert(removeVowels(("acBAA")).equals(("cB")));
    assert(removeVowels(("EcBOO")).equals(("cB")));
    assert(removeVowels(("ybcd")).equals(("ybcd")));
    }

}
