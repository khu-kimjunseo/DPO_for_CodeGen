### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long startsOneEnds(long n) {
        if (n == 1) return 1;
        return 18 * (long)Math.pow(10, n - 2);
    }
    

}


### Python version

def starts_one_ends(n: int) -> int:
    if n == 1: return 1
    return 18 * (10 ** (n - 2))
