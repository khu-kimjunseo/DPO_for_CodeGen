import java.util.*;
import java.lang.reflect.*;
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
    public static void main(String[] args) {
    assert(solve(("AsDf")).equals(("aSdF")));
    assert(solve(("1234")).equals(("4321")));
    assert(solve(("ab")).equals(("AB")));
    assert(solve(("#a@C")).equals(("#A@c")));
    assert(solve(("#AsdfW^45")).equals(("#aSDFw^45")));
    assert(solve(("#6@2")).equals(("2@6#")));
    assert(solve(("#$a^D")).equals(("#$A^d")));
    assert(solve(("#ccc")).equals(("#CCC")));
    }

}
