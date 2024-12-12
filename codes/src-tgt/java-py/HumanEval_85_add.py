### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long add(ArrayList<Long> lst) {
        return IntStream.range(1, lst.size()).filter(i -> i % 2 != 0 && lst.get(i) % 2 == 0).mapToLong(i -> lst.get(i)).sum();
    }
    

}


### Python version

from typing import List

def add(lst: List[int]) -> int:
    return sum([lst[i] for i in range(1, len(lst), 2) if lst[i]%2 == 0])
