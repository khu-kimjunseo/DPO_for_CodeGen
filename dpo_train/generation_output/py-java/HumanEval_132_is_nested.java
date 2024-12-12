### Python version

def is_nested(string: str) -> bool:
    opening_bracket_index = []
    closing_bracket_index = []
    for i in range(len(string)):
        if string[i] == '[':
            opening_bracket_index.append(i)
        else:
            closing_bracket_index.append(i)
    closing_bracket_index.reverse()
    cnt = 0
    i = 0
    l = len(closing_bracket_index)
    for idx in opening_bracket_index:
        if i < l and idx < closing_bracket_index[i]:
            cnt += 1
            i += 1
    return cnt >= 2

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isNested(String string) {
        return isNested(string, 0);
    }

    public static boolean isNested(String string, int depth) {
        if (depth == 0) {
            return true;
        }
        if (string.length() == 0) {
            return false;
        }
        if (string.charAt(0) == '[') {
            return isNested(string.substring(1), depth - 1);
        }
        if (string.charAt(0) == ']') {
            return isNested(string.substring(1), depth - 1);
        }
        return false;
    }
}

class Solution {
    public static void main(String[] args) {
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.isNested("[a]"));
        System.out.println(Problem.