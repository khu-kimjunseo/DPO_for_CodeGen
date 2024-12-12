### Python version

from typing import List

def solution(lst: List[int]) -> int:
    return sum([x for idx, x in enumerate(lst) if idx%2==0 and x%2==1])

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long solution(ArrayList<Long> lst) {
        return IntStream.range(0, lst.size()).filter(i -> i%2==0 && lst.get(i)%2==1).mapToLong(i -> lst.get(i)).sum();
    }
    

}

