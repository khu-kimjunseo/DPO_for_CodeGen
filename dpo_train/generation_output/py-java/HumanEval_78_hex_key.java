### Python version

def hex_key(num: str) -> int:
    primes = ('2', '3', '5', '7', 'B', 'D')
    total = 0
    for i in range(0, len(num)):
        if num[i] in primes:
            total += 1
    return total

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long hexKey(String num) {
        return hex_key(num.toUpperCase());
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.hexKey("A"));
        System.out.println(solution.hexKey("B"));
        System.out.println(solution.hexKey("C"));
        System.out.println(solution.hexKey("D"));
        System.out.println(solution.hexKey("E"));
        System.out.println(solution.hexKey("F"));
        System.out.println(solution.hexKey("G"));
        System.out.println(solution.hexKey("H"));
        System.out.println(solution.hexKey("I"));
        System.out.println(solution.hexKey("J"));
        System.out.println(solution.hexKey("K"));
        System.out.println(solution.hexKey("L"));
        System.out.println(solution.hexKey("M"));
        System.out.println(solution.hexKey("N"));
        System.out.println(solution.hexKey("O"));
        System.out.println(solution.hexKey("P"));
        System.out.println(solution.hexKey("Q"));
        System.out.println(solution.hexKey("R"));
        System.out.println(solution.hexKey("S"));
        System.out.println(solution.hexKey("T"));
        System.out.println(solution.hexKey("U"));
        System.out.println(solution.hexKey("V"));
        System.out.println(solution.hexKey("W"));
        System.out.println(solution.hexKey("X"));
        System.out.println(solution.hexKey("Y"));
        System.out.println(solution.hexKey("Z"));
    }
}
