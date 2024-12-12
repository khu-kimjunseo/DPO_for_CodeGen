### Python version

def solve(s: str) -> str:
    flg = 0
    idx = 0
    new_str = list(s)
    for i in s:
        if i.isalpha():
            new_str[idx] = i.swapcase()
            flg = 1
        idx += 1
    s = ""
    for i in new_str:
        s += i
    if flg == 0:
        return s[len(s)::-1]
    return s

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(String s) {
        return solve(s, new HashSet<>());
    }

    public static String solve(String s, Set<String> set) {
        if (s.isEmpty()) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == ' ') {
                sb.append(" ");
            } else if (c == '\n') {
                sb.append("\n");
            } else if (c == '\t') {
                sb.append("\t");
            } else if (c == '\r') {
                sb.append("\r");
            } else if (c == '\f') {
                sb.append("\f");
            } else if (c == '\b') {
                sb.append("\b");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\"') {
                sb.append("\"");
            } else if (c == '\\') {
                sb.append("\\");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\"') {
                sb.append("\"");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\n') {
                sb.append("\n");
            } else if (c == '\t') {
                sb.append("\t");
            } else if (c == '\r') {
                sb.append("\r");
            } else if (c == '\f') {
                sb.append("\f");
            } else if (c == '\b') {
                sb.append("\b");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\"') {
                sb.append("\"");
            } else if (c == '\\') {
                sb.append("\\");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\"') {
                sb.append("\"");
            } else if (c == '\n') {
                sb.append("\n");
            } else if (c == '\t') {
                sb.append("\t");
            } else if (c == '\r') {
                sb.append("\r");
            } else if (c == '\f') {
                sb.append("\f");
            } else if (c == '\b') {
                sb.append("\b");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\"') {
                sb.append("\"");
            } else if (c == '\'') {
                sb.append("\'");
            } else if (c == '\n') {
                sb.append("\n");
            } else if (c == '\t') {
                sb.append("\t");
            } else if (c == '\r') {
                sb.append("\r");
            } else if (c == '\f') {
                sb.append("\f");
            } else if (c == '