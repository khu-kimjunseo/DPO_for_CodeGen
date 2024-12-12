### Python version

from typing import List

def is_sorted(lst: List[int]) -> bool:
    count_digit = dict([(i, 0) for i in lst])
    for i in lst:
        count_digit[i]+=1
    if any(count_digit[i] > 2 for i in lst):
        return False
    if all(lst[i-1] <= lst[i] for i in range(1, len(lst))):
        return True
    else:
        return False

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isSorted(ArrayList<Long> lst) {
        return is_sorted(lst);
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> lst = new ArrayList<>();
        lst.add(1L);
        lst.add(2L);
        lst.add(3L);
        lst.add(4L);
        lst.add(5L);
        lst.add(6L);
        lst.add(7L);
        lst.add(8L);
        lst.add(9L);
        lst.add(10L);
        lst.add(11L);
        lst.add(12L);
        lst.add(13L);
        lst.add(14L);
        lst.add(15L);
        lst.add(16L);
        lst.add(17L);
        lst.add(18L);
        lst.add(19L);
        lst.add(20L);
        lst.add(21L);
        lst.add(22L);
        lst.add(23L);
        lst.add(24L);
        lst.add(25L);
        lst.add(26L);
        lst.add(27L);
        lst.add(28L);
        lst.add(29L);
        lst.add(30L);
        lst.add(31L);
        lst.add(32L);
        lst.add(33L);
        lst.add(34L);
        lst.add(35L);
        lst.add(36L);
        lst.add(37L);
        lst.add(38L);
        lst.add(39L);
        lst.add(40L);
        lst.add(41L);
        lst.add(42L);
        lst.add(43L);
        lst.add(44L);
        lst.add(45L);
        lst.add(46L);
        lst.add(47L);
        lst.add(48L);
        lst.add(49L);
        lst.add(50L);
        lst.add(51L);
        lst.add(52L);
        lst.add(53L);
        lst.add(54L);
        lst.add(55L);
        lst.add(56L);
        lst.add(57L);
        lst.add(58L);
        lst.add(59L);
        lst.add(60L);
        lst.add(61L);
        lst.add(62L);
        lst.add(63L);
        lst.add(64L);
        lst.add(65L);
        lst.add(66L);
        lst.add(67L);
        lst.add(68L);
        lst.add(69L);
        lst.add(70L);
        lst.add(71L);
        lst.add(72L);
        lst.add(73L);
        lst.add(74L);
        lst.add(75L);
        lst.add(76L);
