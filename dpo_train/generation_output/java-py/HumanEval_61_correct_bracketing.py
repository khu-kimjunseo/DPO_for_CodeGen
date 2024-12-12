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
        int depth = 0;
        for (char b : brackets.toCharArray()) {
            if (b == '(') {
                depth++;
            } else {
                depth--;
            }
            if (depth < 0) {
                return false;
            }
        }
        return depth == 0;
    }
}

### Python version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correctBracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correctBracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correctBracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correctBracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correctBracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correctBracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correctBracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correctBracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correctBracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correctBracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correct_bracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correct_bracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '(':
        return correct_bracketing(brackets.substring(1))
    if brackets.charAt(brackets.length() - 1) == ')':
        return correct_bracketing(brackets.substring(0, brackets.length() - 1))
    return False

### Java version

def correct_bracketing(br