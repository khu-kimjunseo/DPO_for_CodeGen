### Python version

from typing import List

def common(l1: List[int], l2: List[int]) -> List[int]:
    ret = set()
    for e1 in l1:
        for e2 in l2:
            if e1 == e2:
                ret.add(e1)
    return sorted(list(ret))

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> common(ArrayList<Long> l1, ArrayList<Long> l2) {
        ArrayList<Long> ret = new ArrayList<>();
        for (int i = 0; i < l1.size(); i++) {
            if (l1.get(i) == l2.get(i)) {
                ret.add(l1.get(i));
            }
        }
        return ret;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        // TODO Auto-generated method stub
        ArrayList<Long> l1 = new ArrayList<>();
        ArrayList<Long> l2 = new ArrayList<>();
        l1.add(1L);
        l2.add(2L);
        l1.add(3L);
        l2.add(4L);
        l1.add(5L);
        l2.add(6L);
        l1.add(7L);
        l2.add(8L);
        l1.add(9L);
        l2.add(10L);
        l1.add(11L);
        l2.add(12L);
        l1.add(13L);
        l2.add(14L);
        l1.add(15L);
        l2.add(16L);
        l1.add(17L);
        l2.add(18L);
        l1.add(19L);
        l2.add(20L);
        l1.add(21L);
        l2.add(22L);
        l1.add(23L);
        l2.add(24L);
        l1.add(25L);
        l2.add(26L);
        l1.add(27L);
        l2.add(28L);
        l1.add(29L);
        l2.add(30L);
        l1.add(31L);
        l2.add(32L);
        l1.add(33L);
        l2.add(34L);
        l1.add(35L);
        l2.add(36L);
        l1.add(37L);
        l2.add(38L);
        l1.add(39L);
        l2.add(40L);
        l1.add(41L);
        l2.add(42L);
        l1.add(43L);
        l2.add(44L);
        l1.add(45L);
        l2.add(46L);
        l1.add(47L);
        l2.add(48L);
        l1.add(49L);
        l2.add(50L);
        l1.add(51L);
        l2.add(52L);
        l1.add(53L);
        l2.add(54L);
        l1.add(55L);
        l2.add(56L);
        l1.add(57L);
        l2.add(58L);
        l1.add(59L);
        l2.add(60L);
        l1.add(61L);
        l2.add(62L);
        l1.add(63L);
        l2.add(64L);
        l1.add(65L);
        l2.add(66L);
        l1.add(67L);
        l2.add(68L);
        l1.add(69L);
        l2.add(70L);
        