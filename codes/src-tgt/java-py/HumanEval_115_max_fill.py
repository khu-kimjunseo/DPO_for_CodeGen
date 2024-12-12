### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        return grid.stream().mapToLong(arr -> (long)Math.ceil(arr.stream().mapToLong(x -> x).sum()/(double)capacity)).sum();
    }
    
    

}


### Python version

import math
from typing import List

def max_fill(grid: List[List[int]], capacity: int) -> int:
    return sum([math.ceil(sum(arr)/capacity) for arr in grid])
