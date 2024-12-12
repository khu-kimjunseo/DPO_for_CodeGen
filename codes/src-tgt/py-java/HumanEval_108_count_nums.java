### Python version

from typing import List

def count_nums(arr: List[int]) -> int:
    def digits_sum(n):
        neg = 1
        if n < 0: n, neg = -1 * n, -1 
        n = [int(i) for i in str(n)]
        n[0] = n[0] * neg
        return sum(n)
    return len(list(filter(lambda x: x > 0, [digits_sum(i) for i in arr])))

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countNums(ArrayList<Long> arr) {
        return arr.stream().map(i -> digitsSum(i)).filter(i -> i > 0).count();
    }

    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String[] digits = Long.toString(n).split("");
        digits[0] = Long.toString(Long.parseLong(digits[0]) * neg);
        return Arrays.stream(digits).mapToLong(Long::parseLong).sum();
    }
    

}

