### Python version

from typing import List

def add(lst: List[int]) -> int:
    return sum([lst[i] for i in range(1, len(lst), 2) if lst[i]%2 == 0])

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
        long sum = 0;
        for (int i = 0; i < lst.size(); i++) {
            sum += lst.get(i);
        }
        return sum;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(Problem.add(lst));
    }
}
