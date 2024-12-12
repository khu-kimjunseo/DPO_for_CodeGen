### Python version

from typing import List

def generate_integers(a: int, b: int) -> List[int]:
    lower = max(2, min(a, b))
    upper = min(8, max(a, b))

    return [i for i in range(lower, upper+1) if i % 2 == 0]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> generateIntegers(long a, long b) {
        long lower = Math.max(2, Math.min(a, b));
        long upper = Math.min(8, Math.max(a, b));
        ArrayList<Long> res = new ArrayList<>();
        for (long i = lower; i <= upper; i++) {
            if (i % 2 == 0) {
                res.add(i);
            }
        }
        return res;
    }
    

}

