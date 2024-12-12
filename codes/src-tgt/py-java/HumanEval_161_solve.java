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
        int flg = 0;
        int idx = 0;
        char[] newStr = s.toCharArray();
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                newStr[idx] = Character.isUpperCase(c) ? Character.toLowerCase(c) : Character.toUpperCase(c);
                flg = 1;
            }
            idx++;
        }
        if (flg == 0) {
            return new StringBuilder(s).reverse().toString();
        }
        return new String(newStr);
    }
    

}

