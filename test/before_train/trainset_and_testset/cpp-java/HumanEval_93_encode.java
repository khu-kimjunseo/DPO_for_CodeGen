import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encode(String message) {
        return encode(message.toLowerCase());
    }
    public static String decode(String message) {
        return decode(message.toLowerCase());
    }
    public static String encode(String message, String vowels) {
        return encode(message.toLowerCase(), vowels);
    }
    public static String decode(String message, String vowels) {
        return decode(message.toLowerCase(), vowels);
    }
    public static String encode(String message, String vowels, String vowels_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace, String vowels_replace_replace_replace_replace) {
        return encode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace, vowels_replace_replace_replace_replace);
    }
    public static String decode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace_replace, String vowels_replace_replace_replace_replace) {
        return decode(message.toLowerCase(), vowels, vowels_replace, vowels_replace_replace, vowels_replace_replace_replace, vowels_replace_replace_replace_replace);
    }
    public static String encode(String message, String vowels, String vowels_replace, String vowels_replace_replace, String vowels_replace_replace
    public static void main(String[] args) {
    assert(encode(("TEST")).equals(("tgst")));
    assert(encode(("Mudasir")).equals(("mWDCSKR")));
    assert(encode(("YES")).equals(("ygs")));
    assert(encode(("This is a message")).equals(("tHKS KS C MGSSCGG")));
    assert(encode(("I DoNt KnOw WhAt tO WrItE")).equals(("k dQnT kNqW wHcT Tq wRkTg")));
    }

}
