### Python version

from typing import List

def match_parens(lst: List[str]) -> str:
    def check(s):
        val = 0
        for i in s:
            if i == '(':
                val = val + 1
            else:
                val = val - 1
            if val < 0:
                return False
        return True if val == 0 else False

    S1 = lst[0] + lst[1]
    S2 = lst[1] + lst[0]
    return 'Yes' if check(S1) or check(S2) else 'No'

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(ArrayList<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(List<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(List<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(Tuple<String, String> lst) {
        return matchParens(lst.getTuple());
    }

    public static String matchParens(Tuple<String, String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.getTuple().get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(Tuple<String, String> lst) {
        return matchParens(lst.getTuple());
    }

    public static String matchParens(Tuple<String, String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.getTuple().get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(ArrayList<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(ArrayList<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(List<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(List<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.