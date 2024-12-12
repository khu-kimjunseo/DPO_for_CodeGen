### Python version

def circular_shift(x: int, shift: int) -> str:
    s = str(x)
    if shift > len(s):
        return s[::-1]
    else:
        return s[len(s) - shift:] + s[:len(s) - shift]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String circularShift(long x, long shift) {
        String s = Long.toString(x);
        if (shift > s.length()) {
            return new StringBuilder(s).reverse().toString();
        }
        return s.substring((int) (s.length() - shift)) + s.substring(0, (int) (s.length() - shift));
    }
    
    

}

