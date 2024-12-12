### Python version

from typing import List

def order_by_points(nums: List[int]) -> List[int]:
    def digits_sum(n):
        neg = 1
        if n < 0: n, neg = -1 * n, -1 
        n = [int(i) for i in str(n)]
        n[0] = n[0] * neg
        return sum(n)
    return sorted(nums, key=digits_sum)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> orderByPoints(ArrayList<Long> nums) {
        return nums.stream().sorted((a, b) -> Long.compare(digitsSum(a), digitsSum(b))).collect(Collectors.toCollection(ArrayList::new));
    }
    private static long digitsSum(long n) {
        long neg = 1;
        if (n < 0) {
            n = -1 * n;
            neg = -1;
        }
        String s = Long.toString(n);
        long[] digits = new long[s.length()];
        for (int i = 0; i < s.length(); i++) {
            digits[i] = s.charAt(i) - '0';
        }
        digits[0] *= neg;
        return Arrays.stream(digits).sum();
    }
    

}

