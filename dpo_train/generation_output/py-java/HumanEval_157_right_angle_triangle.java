### Python version

def right_angle_triangle(a: int, b: int, c: int) -> bool:
    return a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean rightAngleTriangle(long a, long b, long c) {
        return a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        System.out.println(Problem.rightAngleTriangle(a, b, c));
    }
}
