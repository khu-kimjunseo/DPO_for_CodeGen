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

### Python version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) -> str:
    return Problem().solve(s);

### Java version

def solve(s: str) ->