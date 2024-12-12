### Python version

def choose_num(x: int, y: int) -> int:
    if x > y:
        return -1
    if y % 2 == 0:
        return y
    if x == y:
        return -1
    return y - 1

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long chooseNum(long x, long y) {
        if (x > y) {
            return -1;
        }
        if (y % 2 == 0) {
            return y;
        }
        if (x == y) {
            return -1;
        }
        return y - 1;
    }
    

}

