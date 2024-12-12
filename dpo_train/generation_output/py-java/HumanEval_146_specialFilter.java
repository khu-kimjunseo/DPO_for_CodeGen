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
        for (int i = 0; i < nums.size(); i++) {
            if (nums.get(i) > 10) {
                count += 1;
            }
        }
        return count;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> nums = new ArrayList<>();
        nums.add(1L);
        nums.add(2L);
        nums.add(3L);
        nums.add(4L);
        nums.add(5L);
        nums.add(6L);
        nums.add(7L);
        nums.add(8L);
        nums.add(9L);
        nums.add(10L);
        nums.add(11L);
        nums.add(12L);
        nums.add(13L);
        nums.add(14L);
        nums.add(15L);
        nums.add(16L);
        nums.add(17L);
        nums.add(18L);
        nums.add(19L);
        nums.add(20L);
        nums.add(21L);
        nums.add(22L);
        nums.add(23L);
        nums.add(24L);
        nums.add(25L);
        nums.add(26L);
        nums.add(27L);
        nums.add(28L);
        nums.add(29L);
        nums.add(30L);
        nums.add(31L);
        nums.add(32L);
        nums.add(33L);
        nums.add(34L);
        nums.add(35L);
        nums.add(36L);
        nums.add(37L);
        nums.add(38L);
        nums.add(39L);
        nums.add(40L);
        nums.add(41L);
        nums.add(42L);
        nums.add(43L);
        nums.add(44L);
        nums.add(45L);
        nums.add(46L);
        nums.add(47L);
        nums.add(48L);
        nums.add(49L);
        nums.add(50L);
        nums.add(51L);
        nums.add(52L);
        nums.add(53L);
        nums.add(54L);
        nums.add(55L);
        nums.add(56L);
        nums.add(57L);
        nums.add(58L);
        nums.add(59L);
        nums.add(60L);
        nums.add(61L);
        nums.add(62L);
        nums.add(63L);
        nums.add(64L);
        nums.add(65L);
        nums.add(66L);
        nums.add(67L);
        nums.add(68L);
        nums.add(69L);
        nums.add(70L);
        nums.add(71L);
        nums.add(72L);
