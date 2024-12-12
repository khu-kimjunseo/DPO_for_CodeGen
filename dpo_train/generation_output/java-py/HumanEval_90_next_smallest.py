### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return lst.stream().sorted().distinct().skip(1).findFirst();
    }
    
}

### Python version

from typing import List, Optional

def next_smallest(lst: List[int]) -> Optional[int]:
    return lst.stream().sorted().distinct().skip(1).findFirst().get();

### Java version

import java.util.stream.IntStream;

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.nextSmallest(IntStream.range(0, 10)));
    }
}
