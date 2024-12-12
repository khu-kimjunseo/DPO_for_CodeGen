### Python version

from typing import List

def below_threshold(l: List[int], t: int) -> bool:
    for e in l:
        if e >= t:
            return False
    return True

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowThreshold(ArrayList<Long> l, long t) {
        for (long e : l) {
            if (e >= t) {
                return false;
            }
        }
        return true;
    }
    

}

