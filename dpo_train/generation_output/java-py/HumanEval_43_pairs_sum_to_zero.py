### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean pairsSumToZero(ArrayList<Long> l) {
        for (int i = 0; i < l.size(); i++) {
            for (int j = i + 1; j < l.size(); j++) {
                if (l.get(i) + l.get(j) == 0) {
                    return true;
                }
            }
        }
        return false;
    }
}

### Python version

from typing import List

def pairs_sum_to_zero(l: List[int]) -> bool:
    return len(l) == 0 or pairsSumToZero(l)

### Java version

import java.util.stream.IntStream;

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.pairs_sum_to_zero(IntStream.range(0, 10)));
    }
}
