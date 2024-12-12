import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String removeVowels(String text) {
        return text.replaceAll("[^aeiouAEIOU]", "");
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
