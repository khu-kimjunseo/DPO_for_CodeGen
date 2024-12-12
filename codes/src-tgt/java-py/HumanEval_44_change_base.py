### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String changeBase(long x, long base) {
        String ret = "";
        while (x > 0) {
            ret = x % base + ret;
            x /= base;
        }
        return ret;
    }
    
    

}


### Python version

def change_base(x: int, base: int) -> str:
    ret = ""
    while x > 0:
        ret = str(x % base) + ret
        x //= base
    return ret
