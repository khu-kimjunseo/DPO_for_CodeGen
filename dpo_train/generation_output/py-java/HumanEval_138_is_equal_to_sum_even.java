### Python version

def is_equal_to_sum_even(n: int) -> bool:
    return n%2 == 0 and n >= 8

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isEqualToSumEven(long n) {
        return is_equal_to_sum_even(n);
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        System.out.println(Problem.isEqualToSumEven(n));
    }
}
