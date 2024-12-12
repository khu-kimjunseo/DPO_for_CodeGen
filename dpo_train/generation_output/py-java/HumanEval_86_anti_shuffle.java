### Python version

def anti_shuffle(s: str) -> str:
    return ' '.join([''.join(sorted(list(i))) for i in s.split(' ')])

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String antiShuffle(String s) {
        return anti_shuffle(s.toLowerCase());
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.antiShuffle("a"));
    }
}

class Solution {
    public static String anti_shuffle(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == 'a') {
                sb.append("A");
            } else if (c == 'b') {
                sb.append("B");
            } else if (c == 'c') {
                sb.append("C");
            } else if (c == 'd') {
                sb.append("D");
            } else if (c == 'e') {
                sb.append("E");
            } else if (c == 'f') {
                sb.append("F");
            } else if (c == 'g') {
                sb.append("G");
            } else if (c == 'h') {
                sb.append("H");
            } else if (c == 'i') {
                sb.append("I");
            } else if (c == 'j') {
                sb.append("J");
            } else if (c == 'k') {
                sb.append("K");
            } else if (c == 'l') {
                sb.append("L");
            } else if (c == 'm') {
                sb.append("M");
            } else if (c == 'n') {
                sb.append("N");
            } else if (c == 'o') {
                sb.append("O");
            } else if (c == 'p') {
                sb.append("P");
            } else if (c == 'q') {
                sb.append("Q");
            } else if (c == 'r') {
                sb.append("R");
            } else if (c == 's') {
                sb.append("S");
            } else if (c == 't') {
                sb.append("T");
            } else if (c == 'u') {
                sb.append("U");
            } else if (c == 'v') {
                sb.append("V");
            } else if (c == 'w') {
                sb.append("W");
            } else if (c == 'x') {
                sb.append("X");
            } else if (c == 'y') {
                sb.append("Y");
            } else if (c == 'z') {
                sb.append("Z");
            } else if (c == ' ') {
                sb.append(" ");
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }
}
