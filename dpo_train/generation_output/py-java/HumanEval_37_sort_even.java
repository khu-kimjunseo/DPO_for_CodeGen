### Python version

from typing import List

def sort_even(l: List[int]) -> List[int]:
    evens = l[::2]
    odds = l[1::2]
    evens.sort()
    ans = []
    for e, o in zip(evens, odds):
        ans.extend([e, o])
    if len(evens) > len(odds):
        ans.append(evens[-1])
    return ans

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> ans = new ArrayList<>();
        for (int i = 0; i < l.size(); i++) {
            if (l.get(i) % 2 == 0) {
                ans.add(l.get(i));
            }
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> l = new ArrayList<>();
        l.add(1L);
        l.add(2L);
        l.add(3L);
        l.add(4L);
        l.add(5L);
        l.add(6L);
        l.add(7L);
        l.add(8L);
        l.add(9L);
        l.add(10L);
        l.add(11L);
        l.add(12L);
        l.add(13L);
        l.add(14L);
        l.add(15L);
        l.add(16L);
        l.add(17L);
        l.add(18L);
        l.add(19L);
        l.add(20L);
        l.add(21L);
        l.add(22L);
        l.add(23L);
        l.add(24L);
        l.add(25L);
        l.add(26L);
        l.add(27L);
        l.add(28L);
        l.add(29L);
        l.add(30L);
        l.add(31L);
        l.add(32L);
        l.add(33L);
        l.add(34L);
        l.add(35L);
        l.add(36L);
        l.add(37L);
        l.add(38L);
        l.add(39L);
        l.add(40L);
        l.add(41L);
        l.add(42L);
        l.add(43L);
        l.add(44L);
        l.add(45L);
        l.add(46L);
        l.add(47L);
        l.add(48L);
        l.add(49L);
        l.add(50L);
        l.add(51L);
        l.add(52L);
        l.add(53L);
        l.add(54L);
        l.add(55L);
        l.add(56L);
        l.add(57L);
        l.add(58L);
        l.add(59L);
        l.add(60L);
        l.add(61L);
        l.add(62L);
        l.add(63L);
        l.add(64L);
        l.add(65L);
        l.add(66L);
        l.add(67L);
        l.add(68L);
        l.add(69L);
        l.add(70L);
        l.add(71L);
        l.add(72L);
        l.add(73L);
        l.add(74L);
        l.add(75L);
        l.add(76L);
        l.add(77L);
        l.add(78L);
        l.add(79L);
        l