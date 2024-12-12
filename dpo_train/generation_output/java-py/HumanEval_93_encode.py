### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = swapCase(message);
        StringBuilder sb = new StringBuilder();
        for (char i : message.toCharArray()) {
            sb.append(vowels_replace.containsKey(i) ? vowels_replace.get(i) : i);
        }
        return sb.toString();
    }
    public static String swapCase(String str) {
        StringBuilder sb = new StringBuilder();
        for (char i : str.toCharArray()) {
            sb.append(Character.isUpperCase(i) ? Character.toLowerCase(i) : Character.toUpperCase(i));
        }
        return sb.toString();
    }
    
}

### Python version

def encode(message: str) -> str:
    return encode(message.replace("\n", "").replace("\r", "").replace("\t", "").replace("\"", "").replace("'", ""));

def decode(message: str) -> str:
    return message.replace("\n", "").replace("\r", "").replace("\t", "").replace("\"", "").replace("'", "");

### Java version

class Problem {
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = message.replace("aeiouAEIOU", vowels_replace);
        return message;
    }
    public static String decode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : message.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = message.replace("aeiouAEIOU", vowels_replace);
        return message;
    }
}

### Java version

class Problem {
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = message.replace("aeiouAEIOU", vowels_replace);
        return message;
    }
    public static String decode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : message.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = message.replace("aeiouAEIOU", vowels_replace);
        return message;
    }
}

### Java version

class Problem {
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = message.replace("aeiouAEIOU", vowels_replace);
        return message;
    }
    public static String decode(String message) {
        String vowels = "aeiouAEIOU