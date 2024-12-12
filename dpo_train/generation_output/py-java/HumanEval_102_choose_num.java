### Python version

def choose_num(x: int, y: int) -> int:
    if x > y:
        return -1
    if y % 2 == 0:
        return y
    if x == y:
        return -1
    return y - 1

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long chooseNum(long x, long y) {
        return choose_num(x, y, 0);
    }

    public static long chooseNum(long x, long y, long z) {
        if (x == y) {
            return z;
        }
        if (x > y) {
            return choose_num(x, y, z);
        }
        return choose_num(x, y, z) + choose_num(x, y, z);
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.chooseNum(1, 2));
    }
}
