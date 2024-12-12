### Python version

def correct_bracketing(brackets: str) -> bool:
    depth = 0
    for b in brackets:
        if b == "<":
            depth += 1
        else:
            depth -= 1
        if depth < 0:
            return False
    return depth == 0

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean correctBracketing(String brackets) {
        return correct_bracketing(brackets.split("\\s+"));
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.correctBracketing("[<]"));
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '<') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.correctBracketing("[<]"));
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '<') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '>') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '>') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '>') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '>') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets.length();
    }
}

class Solution {
    public static boolean correct_bracketing(String brackets) {
        List<String> list = new ArrayList<>();
        for (int i = 0; i < brackets.length(); i++) {
            if (brackets.charAt(i) == '>') {
                list.add(brackets.substring(i + 1));
            }
        }
        return list.size() == brackets