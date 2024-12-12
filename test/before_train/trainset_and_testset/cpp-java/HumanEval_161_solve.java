import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                sb.append("(");
            } else if (s.charAt(i) == ')') {
                sb.append(")");
            } else if (s.charAt(i) == ',') {
                sb.append(",");
            } else if (s.charAt(i) == ';') {
                sb.append(";");
            } else if (s.charAt(i) == ':') {
                sb.append(":");
            } else if (s.charAt(i) == '\'') {
                sb.append("'");
            } else if (s.charAt(i) == '\"') {
                sb.append("\"");
            } else if (s.charAt(i) == '\n') {
                sb.append("\n");
            } else if (s.charAt(i) == '\r') {
                sb.append("\r");
            } else if (s.charAt(i) == '\t') {
                sb.append("\t");
            } else if (s.charAt(i) == '\b') {
                sb.append("\b");
            } else if (s.charAt(i) == '\f') {
                sb.append("\f");
            } else if (s.charAt(i) == '\0') {
                sb.append("\0");
            } else if (s.charAt(i) == '\x1b') {
                sb.append("\x1b");
            } else if (s.charAt(i) == '\x1c') {
                sb.append("\x1c");
            } else if (s.charAt(i) == '\x1d') {
                sb.append("\x1d");
            } else if (s.charAt(i) == '\x1e') {
                sb.append("\x1e");
            } else if (s.charAt(i) == '\x1f') {
                sb.append("\x1f");
            } else if (s.charAt(i) == '\x7f') {
                sb.append("\x7f");
            } else if (s.charAt(i) == '\x80') {
                sb.append("\x80");
            } else if (s.charAt(i) == '\x81') {
                sb.append("\x81");
            } else if (s.charAt(i) == '\x82') {
                sb.append("\x82");
            } else if (s.charAt(i) == '\x83') {
                sb.append("\x83");
            } else if (s.charAt(i) == '\x84') {
                sb.append("\x84");
            } else if (s
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
