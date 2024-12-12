### Python version

from typing import List

def common(l1: List[int], l2: List[int]) -> List[int]:
    ret = set()
    for e1 in l1:
        for e2 in l2:
            if e1 == e2:
                ret.add(e1)
    return sorted(list(ret))

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        Set<Long> set = new HashSet<>(l1);
        set.retainAll(l2);
        ArrayList<Long> ret = new ArrayList<>(set);
        Collections.sort(ret);
        return ret;
    }
    

}

