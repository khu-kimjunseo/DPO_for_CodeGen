### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> separateParenGroups(String paren_string) {
        ArrayList<String> result = new ArrayList<String>();
        ArrayList<Character> current_string = new ArrayList<Character>();
        int current_depth = 0;

        for (int i = 0; i < paren_string.length(); i++) {
            char c = paren_string.charAt(i);
            if (c == '(') {
                current_depth += 1;
                current_string.add(c);
            } else if (c == ')') {
                current_depth -= 1;
                current_string.add(c);

                if (current_depth == 0) {
                    StringBuilder sb = new StringBuilder(current_string.size());
                    for (Character ch : current_string) {
                        sb.append(ch);
                    }
                    result.add(sb.toString());
                    current_string.clear();
                }
            }
        }

        return result;
    }
}

### Python version

from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            result.append(paren_string[i+1:i+2])
        elif paren_string[i] == ')':
            result.append(paren_string[i+1:i+2])
    return result

### Java version

def separate_paren_groups(paren_string: str) -> List[str]:
    result