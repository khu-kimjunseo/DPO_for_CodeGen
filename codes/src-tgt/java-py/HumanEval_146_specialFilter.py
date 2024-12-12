### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long specialFilter(ArrayList<Long> nums) {
        long count = 0;
        for (long num : nums) {
            if (num > 10) {
                if (isOdd(num / (long) Math.pow(10, (long) Math.log10(num))) && isOdd(num % 10)) {
                    count++;
                }
            }
        }
        return count;
    }

    private static boolean isOdd(long n) {
        return n % 2 == 1;
    }
    

}


### Python version

from typing import List

def specialFilter(nums: List[int]) -> int:
    
    count = 0
    for num in nums:
        if num > 10:
            odd_digits = (1, 3, 5, 7, 9)
            number_as_string = str(num)
            if int(number_as_string[0]) in odd_digits and int(number_as_string[-1]) in odd_digits:
                count += 1
        
    return count
