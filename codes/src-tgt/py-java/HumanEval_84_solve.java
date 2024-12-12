### Python version

def solve(N: int) -> str:
    return bin(sum(int(i) for i in str(N)))[2:]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(long N) {
        return Long.toBinaryString(Long.toString(N).chars().map(c -> c - '0').sum());
    }
    

}

