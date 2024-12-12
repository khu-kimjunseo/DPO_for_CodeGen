### Python version

from typing import List

def max_element(l: List[int]) -> int:
    m = l[0]
    for e in l:
        if e > m:
            m = e
    return m

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxElement(ArrayList<Long> l) {
        long m = l.get(0);
        for (long e : l) {
            m = Math.max(m, e);
        }
        return m;
    }
    

}

