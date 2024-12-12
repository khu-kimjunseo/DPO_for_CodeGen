### Python version

from typing import List

def derivative(xs: List[int]) -> List[int]:
    return [(i * x) for i, x in enumerate(xs)][1:]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> derivative(ArrayList<Long> xs) {
        return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}

