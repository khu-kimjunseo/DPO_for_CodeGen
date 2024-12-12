### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> incrList(ArrayList<Long> l) {
        return l.stream().map(e -> e + 1).collect(Collectors.toCollection(ArrayList::new));
    }
    

}


### Python version

from typing import List

def incr_list(l: List[int]) -> List[int]:
    return [(e + 1) for e in l]
