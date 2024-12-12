### Python version

from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    running_max = None
    result = []

    for n in numbers:
        if running_max is None:
            running_max = n
        else:
            running_max = max(running_max, n)

        result.append(running_max)

    return result

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> rollingMax(ArrayList<Long> numbers) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = 0; i < numbers.size(); i++) {
            result.add(numbers.get(i));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> numbers = new ArrayList<>();
        numbers.add(1L);
        numbers.add(2L);
        numbers.add(3L);
        numbers.add(4L);
        numbers.add(5L);
        numbers.add(6L);
        numbers.add(7L);
        numbers.add(8L);
        numbers.add(9L);
        numbers.add(10L);
        numbers.add(11L);
        numbers.add(12L);
        numbers.add(13L);
        numbers.add(14L);
        numbers.add(15L);
        numbers.add(16L);
        numbers.add(17L);
        numbers.add(18L);
        numbers.add(19L);
        numbers.add(20L);
        numbers.add(21L);
        numbers.add(22L);
        numbers.add(23L);
        numbers.add(24L);
        numbers.add(25L);
        numbers.add(26L);
        numbers.add(27L);
        numbers.add(28L);
        numbers.add(29L);
        numbers.add(30L);
        numbers.add(31L);
        numbers.add(32L);
        numbers.add(33L);
        numbers.add(34L);
        numbers.add(35L);
        numbers.add(36L);
        numbers.add(37L);
        numbers.add(38L);
        numbers.add(39L);
        numbers.add(40L);
        numbers.add(41L);
        numbers.add(42L);
        numbers.add(43L);
        numbers.add(44L);
        numbers.add(45L);
        numbers.add(46L);
        numbers.add(47L);
        numbers.add(48L);
        numbers.add(49L);
        numbers.add(50L);
        numbers.add(51L);
        numbers.add(52L);
        numbers.add(53L);
        numbers.add(54L);
        numbers.add(55L);
        numbers.add(56L);
        numbers.add(57L);
        numbers.add(58L);
        numbers.add(59L);
        numbers.add(60L);
        numbers.add(61L);
        numbers.add(62L);
        numbers.add(63L);
        numbers.add(64L);
        numbers.add(65L);
        numbers.add(66L);
        numbers.add(67L);
        numbers.add(68L);
        numbers.add(69L);
        numbers.add(70L);
        numbers.add(71L);
        numbers.add(72L);
        numbers.add(73L);
        numbers.add(74L);
        numbers.add(75L