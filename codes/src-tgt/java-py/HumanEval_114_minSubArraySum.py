### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long minSubArraySum(ArrayList<Long> nums) {
        long max_sum = 0;
        long s = 0;
        for (long num : nums) {
            s += -num;
            if (s < 0) {
                s = 0;
            }
            max_sum = Math.max(s, max_sum);
        }
        if (max_sum == 0) {
            max_sum = nums.stream().mapToLong(i -> -i).max().getAsLong();
        }
        long min_sum = -max_sum;
        return min_sum;
    }
    

}


### Python version

from typing import List

def minSubArraySum(nums: List[int]) -> int:
    max_sum = 0
    s = 0
    for num in nums:
        s += -num
        if (s < 0):
            s = 0
        max_sum = max(s, max_sum)
    if max_sum == 0:
        max_sum = max(-i for i in nums)
    min_sum = -max_sum
    return min_sum
