import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    // In this Kata, you have to sort an array array list of non-negative integers according to
    // number of ones in their binary representation in ascending order.
    // For similar number of ones, sort based on decimal value.
    // It must be implemented like this:
    // >>> sort_array([1, 5, 2, 3, 4])
    // [1, 2, 3, 4, 5]
    // >>> sort_array([-2, -3, -4, -5, -6])
    // [-6, -5, -4, -3, -2]
    // >>> sort_array([1, 0, 2, 3, 4])
    // [0, 1, 2, 3, 4]
    public static ArrayList<Long> sortArray(ArrayList<Long> arr) {
        return arr.stream().sorted((a, b) -> {
            int aCount = Long.bitCount(Math.abs(a));
            int bCount = Long.bitCount(Math.abs(b));
            if (aCount == bCount) {
                return Long.compare(a, b);
            }
            return Integer.compare(aCount, bCount);
        }).collect(Collectors.toCollection(ArrayList::new));
    }
    

}
