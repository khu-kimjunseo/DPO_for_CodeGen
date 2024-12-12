### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long doubleTheDifference(ArrayList<Float> lst) {
        return lst.stream().filter(i -> i > 0 && i%2!=0 && i == Math.floor(i)).mapToLong(i -> (long) Math.pow(i, 2)).sum();
    }
    

}


### Python version

from typing import List

def double_the_difference(lst: List[float]) -> int:
    return sum([i**2 for i in lst if i > 0 and i%2!=0 and "." not in str(i)])
