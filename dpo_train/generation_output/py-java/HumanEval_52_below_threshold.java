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
        return l.stream().filter(belowThreshold(l, t)).findAny().isPresent();
    }
}

class Solution {
    public static void main(String[] args) {
        long[] l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(Problem.belowThreshold(l, t));
    }
}
