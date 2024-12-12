### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long modp(long n, long p) {
        long ret = 1;
        for (int i = 0; i < n; i++) {
            ret = (2 * ret) % p;
        }
        return ret;
    }
    

}


### Python version

def modp(n: int, p: int) -> int:
    ret = 1
    for i in range(n):
        ret = (2 * ret) % p
    return ret