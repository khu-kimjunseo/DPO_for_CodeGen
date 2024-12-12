### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float median(ArrayList<Long> l) {
        Collections.sort(l);
        int n = l.size();
        if (n % 2 == 1) {
            return l.get(n / 2);
        } else {
            return (l.get(n / 2 - 1) + l.get(n / 2)) / 2.0f;
        }
    }
    

}


### Python version

from typing import List

def median(l: List[int]) -> float:
    l = sorted(l)
    if len(l) % 2 == 1:
        return l[len(l) // 2]
    else:
        return (l[len(l) // 2 - 1] + l[len(l) // 2]) / 2.0
