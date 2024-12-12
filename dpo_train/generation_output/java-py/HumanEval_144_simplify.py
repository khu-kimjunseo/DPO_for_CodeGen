### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean simplify(String x, String n) {
        String[] a = x.split("/");
        String[] b = n.split("/");
        int numerator = Integer.parseInt(a[0]) * Integer.parseInt(b[0]);
        int denom = Integer.parseInt(a[1]) * Integer.parseInt(b[1]);
        return numerator % denom == 0;
    }
}

### Python version

def simplify(x: str, n: str) -> bool:
    if x == n:
        return True
    elif x == n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/"