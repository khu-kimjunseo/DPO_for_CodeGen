### Python version

def encrypt(s: str) -> str:
    d = 'abcdefghijklmnopqrstuvwxyz'
    out = ''
    for c in s:
        if c in d:
            out += d[(d.index(c)+2*2) % 26]
        else:
            out += c
    return out

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encrypt(String s) {
        String d = "abcdefghijklmnopqrstuvwxyz";
        String out = "";
        for (char c : s.toCharArray()) {
            if (d.indexOf(c) != -1) {
                out += d.charAt((d.indexOf(c)+2*2) % 26);
            } else {
                out += c;
            }
        }
        return out;
    }
    

}

